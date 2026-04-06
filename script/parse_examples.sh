#!/bin/bash
# Parse example Menhir files to ensure grammar works on real code

set -e

echo "Parsing example Menhir files..."

# Check if tree-sitter CLI is available
if ! command -v tree-sitter &> /dev/null; then
    echo "Error: tree-sitter CLI not found"
    exit 1
fi

# Parse files listed in test/files.txt if they exist
if [ -f test/files.txt ]; then
    echo "Parsing files from test/files.txt..."
    while IFS= read -r pattern; do
        # Skip empty lines and comments
        [[ -z "$pattern" || "$pattern" =~ ^# ]] && continue

        for file in $pattern; do
            if [ -f "$file" ]; then
                echo "  ✓ $file"
                tree-sitter parse -q "$file" || {
                    echo "  ✗ Failed to parse: $file"
                    exit 1
                }
            fi
        done
    done < test/files.txt
fi

# Clone and test official Menhir examples if not present
TEST_DIR=test_suite
if [ ! -d "$TEST_DIR/menhir" ]; then
    echo ""
    echo "Cloning Menhir test suite..."
    mkdir -p "$TEST_DIR"
    git clone --depth 1 https://gitlab.inria.fr/fpottier/menhir "$TEST_DIR/menhir"
fi

echo ""
echo "Parsing official Menhir test files..."
GOOD_FILES=$(find "$TEST_DIR/menhir/test/static/good" -name "*.mly" | wc -l | tr -d ' ')
echo "Found $GOOD_FILES test files"

find "$TEST_DIR/menhir/test/static/good" -name "*.mly" -print0 | \
    xargs -0 tree-sitter parse -q || {
        echo "Some official test files failed to parse"
        exit 1
    }

echo ""
echo "All example files parsed successfully ✓"
