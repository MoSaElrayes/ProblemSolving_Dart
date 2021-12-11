// Write a function which converts the input string to uppercase.

// Main idea [ASCII values  of alphabets: A – Z = 65 to 90, a – z = 97 to 122]


String makeUpperCase(String str) {
  int strLength = str.length;
  int strToInt(String s) => s.codeUnits.single;
  List<int> a = [];
  for (int i = 0; i < strLength; i++) {
    // print(strToInt('a'));
    if (strToInt(str[i]) >= strToInt('a') &&
        strToInt(str[i]) <= strToInt('z')) {
      a.add(strToInt(str[i]) - 32);
    } else {
      a.add(strToInt(str[i]));
    }
  }
    return String.fromCharCodes([...a]);
}
