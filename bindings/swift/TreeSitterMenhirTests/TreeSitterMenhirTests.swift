import XCTest
import SwiftTreeSitter
import TreeSitterMenhir

final class TreeSitterMenhirTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_menhir())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Menhir grammar")
    }
}
