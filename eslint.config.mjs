import js from "@eslint/js";
import treesitter from "eslint-config-treesitter";

export default [
  js.configs.recommended,
  ...treesitter,
];
