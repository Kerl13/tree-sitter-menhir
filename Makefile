LANGUAGE_NAME := tree-sitter-menhir
HOMEPAGE_URL := https://github.com/Kerl13/tree-sitter-menhir
VERSION := 0.5.0
DESCRIPTION := Menhir grammar for tree-sitter with OCaml language injection

# repository
SRC_DIR := src

TS ?= tree-sitter
MENHIR ?= menhir
PYTHON ?= python3

# Only place the versions are set; CI reads them via the targets below.
# ABI 14 because most Emacs builds can't load ABI 15 yet.
TREE_SITTER_VERSION := v0.27.0
TS_ABI_VERSION := 14
# The Menhir release the grammar is checked against (the opam version), and
# the commit of https://gitlab.inria.fr/fpottier/menhir for that release.
# Release tags are stripped of the test suite, hence the separate commit.
# Use MENHIR_REF=master to check against unreleased Menhir.
MENHIR_VERSION := 20260209
MENHIR_REF ?= 5e79dfee539a00518a4c99bf16961154d02e10a0

# install directory layout
PREFIX ?= /usr/local
DATADIR ?= $(PREFIX)/share
INCLUDEDIR ?= $(PREFIX)/include
LIBDIR ?= $(PREFIX)/lib
BINDIR ?= $(PREFIX)/bin
PCLIBDIR ?= $(LIBDIR)/pkgconfig

# source/object files
PARSER := $(SRC_DIR)/parser.c
EXTRAS := $(filter-out $(PARSER),$(wildcard $(SRC_DIR)/*.c))
OBJS := $(patsubst %.c,%.o,$(PARSER) $(EXTRAS))

# flags
ARFLAGS ?= rcs
override CFLAGS += -I$(SRC_DIR) -std=c11 -fPIC

# ABI versioning
SONAME_MAJOR = $(shell sed -n 's/\#define LANGUAGE_VERSION //p' $(PARSER))
SONAME_MINOR = $(word 1,$(subst ., ,$(VERSION)))

# OS-specific bits
MACHINE := $(shell $(CC) -dumpmachine)

ifneq ($(findstring darwin,$(MACHINE)),)
	SOEXT = dylib
	SOEXTVER_MAJOR = $(SONAME_MAJOR).$(SOEXT)
	SOEXTVER = $(SONAME_MAJOR).$(SONAME_MINOR).$(SOEXT)
	LINKSHARED = -dynamiclib -Wl,-install_name,$(LIBDIR)/lib$(LANGUAGE_NAME).$(SOEXTVER),-rpath,@executable_path/../Frameworks
else ifneq ($(findstring mingw32,$(MACHINE)),)
	SOEXT = dll
	LINKSHARED += -s -shared -Wl,--out-implib,lib$(LANGUAGE_NAME).dll.a
else
	SOEXT = so
	SOEXTVER_MAJOR = $(SOEXT).$(SONAME_MAJOR)
	SOEXTVER = $(SOEXT).$(SONAME_MAJOR).$(SONAME_MINOR)
	LINKSHARED = -shared -Wl,-soname,lib$(LANGUAGE_NAME).$(SOEXTVER)
ifneq ($(filter $(shell uname),FreeBSD NetBSD DragonFly),)
	PCLIBDIR := $(PREFIX)/libdata/pkgconfig
endif
endif

all: lib$(LANGUAGE_NAME).a lib$(LANGUAGE_NAME).$(SOEXT) $(LANGUAGE_NAME).pc

lib$(LANGUAGE_NAME).a: $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

lib$(LANGUAGE_NAME).$(SOEXT): $(OBJS)
	$(CC) $(LDFLAGS) $(LINKSHARED) $^ $(LDLIBS) -o $@
ifneq ($(STRIP),)
	$(STRIP) $@
endif

ifneq ($(findstring mingw32,$(MACHINE)),)
lib$(LANGUAGE_NAME).dll.a: lib$(LANGUAGE_NAME).$(SOEXT)
endif

$(LANGUAGE_NAME).pc: bindings/c/$(LANGUAGE_NAME).pc.in
	sed -e 's|@PROJECT_VERSION@|$(VERSION)|' \
		-e 's|@CMAKE_INSTALL_LIBDIR@|$(LIBDIR:$(PREFIX)/%=%)|' \
		-e 's|@CMAKE_INSTALL_INCLUDEDIR@|$(INCLUDEDIR:$(PREFIX)/%=%)|' \
		-e 's|@PROJECT_DESCRIPTION@|$(DESCRIPTION)|' \
		-e 's|@PROJECT_HOMEPAGE_URL@|$(HOMEPAGE_URL)|' \
		-e 's|@CMAKE_INSTALL_PREFIX@|$(PREFIX)|' $< > $@

$(SRC_DIR)/grammar.json: grammar.js
	$(TS) generate --no-parser $^

$(PARSER): $(SRC_DIR)/grammar.json
	$(TS) generate --abi $(TS_ABI_VERSION) $^

install: all
	install -d '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/menhir '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter '$(DESTDIR)$(PCLIBDIR)' '$(DESTDIR)$(LIBDIR)'
	install -m644 bindings/c/tree_sitter/$(LANGUAGE_NAME).h '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/$(LANGUAGE_NAME).h
	install -m644 $(LANGUAGE_NAME).pc '$(DESTDIR)$(PCLIBDIR)'/$(LANGUAGE_NAME).pc
	install -m644 lib$(LANGUAGE_NAME).a '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).a
	install -m755 lib$(LANGUAGE_NAME).$(SOEXT) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER)
ifneq ($(findstring mingw32,$(MACHINE)),)
	install -d '$(DESTDIR)$(BINDIR)'
	install -m755 lib$(LANGUAGE_NAME).dll '$(DESTDIR)$(BINDIR)'/lib$(LANGUAGE_NAME).dll
	install -m755 lib$(LANGUAGE_NAME).dll.a '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).dll.a
else
	install -m755 lib$(LANGUAGE_NAME).$(SOEXT) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER)
	cd '$(DESTDIR)$(LIBDIR)' && ln -sf lib$(LANGUAGE_NAME).$(SOEXTVER) lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR)
	cd '$(DESTDIR)$(LIBDIR)' && ln -sf lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR) lib$(LANGUAGE_NAME).$(SOEXT)
endif
ifneq ($(wildcard queries/*.scm),)
	install -m644 queries/*.scm '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/menhir
endif

uninstall:
	$(RM) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).a \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER) \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR) \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXT) \
		'$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/$(LANGUAGE_NAME).h \
		'$(DESTDIR)$(PCLIBDIR)'/$(LANGUAGE_NAME).pc
	$(RM) -r '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/menhir

clean:
	$(RM) $(OBJS) $(LANGUAGE_NAME).pc lib$(LANGUAGE_NAME).a lib$(LANGUAGE_NAME).$(SOEXT) lib$(LANGUAGE_NAME).dll.a

test:
	$(TS) test

# Regenerate the parser at the pinned ABI.
generate:
	$(TS) generate --abi $(TS_ABI_VERSION)

# Parse Menhir's own .mly files: every valid one must parse cleanly, and
# every one that Menhir rejects with a syntax error must produce an error.
test-menhir:
	TS='$(TS)' MENHIR_REF='$(MENHIR_REF)' script/parse-menhir-suite.sh

# Check tokens, start symbols and rule names against the menhir binary.
compare-menhir:
	TS='$(TS)' MENHIR_REF='$(MENHIR_REF)' script/parse-menhir-suite.sh --fetch-only
	$(PYTHON) -I script/compare-with-menhir.py --menhir '$(MENHIR)' --tree-sitter '$(TS)' \
		$$(find test_suite/menhir-$(MENHIR_REF) -name '*.mly' -not -path '*/bad/*' | sort)

# Read by the CI workflows.
abi-version:
	@echo $(TS_ABI_VERSION)

ts-version:
	@echo $(TREE_SITTER_VERSION)

menhir-version:
	@echo $(MENHIR_VERSION)

menhir-ref:
	@echo $(MENHIR_REF)

.PHONY: all install uninstall clean test generate test-menhir compare-menhir \
	abi-version ts-version menhir-version menhir-ref
