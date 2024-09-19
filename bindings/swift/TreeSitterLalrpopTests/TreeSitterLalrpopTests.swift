import XCTest
import SwiftTreeSitter
import TreeSitterLalrpop

final class TreeSitterLalrpopTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lalrpop())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Lalrpop grammar")
    }
}
