

import 'package:problem_solving/string_to_uppercase.dart';
import 'package:test/scaffolding.dart';
import 'package:test/test.dart';

void main() {
  group("test a func [makeUpperCase] return => input string to uppercase  ", (){
    test("Testing for 'hello'", ()=> expect(makeUpperCase("hello"), equals("HELLO")));
     test('Testing for "hello world"', () => expect(makeUpperCase("hello world"), equals("HELLO WORLD")));
    test('Testing for "hello world !"', () => expect(makeUpperCase("hello world !"), equals("HELLO WORLD !")));
    test('Testing for "heLlO wORLd !"', () => expect(makeUpperCase("heLlO wORLd !"), equals("HELLO WORLD !")));
    test('Testing for "1,2,3 hello world!"', () => expect(makeUpperCase("1,2,3 hello world!"), equals("1,2,3 HELLO WORLD!")));
  });
}