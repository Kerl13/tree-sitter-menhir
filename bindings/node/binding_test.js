const assert = require("node:assert");
const { test } = require("node:test");

const Parser = require("tree-sitter");

test("can load grammar", () => {
  const parser = new Parser();
  assert.doesNotThrow(() => parser.setLanguage(require(".")));
});

test("can parse simple menhir file", () => {
  const parser = new Parser();
  parser.setLanguage(require("."));

  const source = `
%{
  let x = 1
%}
%%
expr: INT { $1 }
`;

  const tree = parser.parse(source);
  assert.ok(tree.rootNode);
  assert.strictEqual(tree.rootNode.type, "source_file");
  assert.strictEqual(tree.rootNode.hasError, false);
});
