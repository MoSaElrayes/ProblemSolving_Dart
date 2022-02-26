import 'package:problem_solving/middle_character.dart';
import 'package:test/test.dart';

void main() {
  group("test a func [getMiddle] return =>  middle character of the word ", () {
      
    test("test", (){expect(getMiddle("test"),equals("es"));});
    test("testing", (){expect(getMiddle("testing"),equals("t"));});
    test("middle", (){expect(getMiddle("middle"),equals("dd"));});
    test("A", (){expect(getMiddle("A"),equals("A"));});
  });
}
