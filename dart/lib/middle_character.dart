// You are going to be given a word. Your job is to return the middle character of the word. If the word's length is odd, return the middle character. If the word's length is even, return the middle 2 characters.

// first solution
String getMiddle(String s) {
  final middleIndex = s.length ~/ 2;
  return s.length.isOdd
      ? s[middleIndex]
      : s.substring(middleIndex - 1, middleIndex + 1);
}

// another solution
String getMiddle2(String s) {
  int sLenght = s.length;
  int sum = 0;
  print(sLenght);

  for (int i = 0; i <= sLenght; i++) {
    sum = sum + i;
  }

  if (s.length % 2 != 0) {
    return s[(sum ~/ sLenght) - 1];
  } else {
    return s[(sum ~/ sLenght) - 1] + s[(sum ~/ sLenght)];
  }

}



