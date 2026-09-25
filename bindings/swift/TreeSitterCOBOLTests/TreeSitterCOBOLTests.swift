import XCTest
import SwiftTreeSitter
import TreeSitterCobol

final class TreeSitterCobolTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_cobol())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading COBOL grammar")
    }
}
