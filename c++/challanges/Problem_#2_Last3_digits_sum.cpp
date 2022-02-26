// ● Write a program that reads an integer and prints the sum of its last 3 digits.
// ● Inputs ⇒ Outputs examples
// ○ 15 ⇒ 6
// ○ 125 ⇒ 8
// ○ 1000 ⇒ 0
// ○ 1001 ⇒ 1
// ○ 1234 ⇒ 9
// ○ 99999 ⇒ 27

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int a, b, c;

    a = (num % 1000) / 100;
    b = (num % 100) / 10;
    c = num % 10;

    cout << "  " << num << "  " << endl;
    cout << a << " +  " << b << " + " << c << " = " << a + b + c;

    return 0;
}