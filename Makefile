TS := ./node_modules/.bin/tree-sitter

.PHONY: all build test clean

all: build test

build:
	[ -e build ] || node-gyp configure
	$(TS) generate
	node-gyp build

test:
	$(TS) test

clean:
	rm -rf build
