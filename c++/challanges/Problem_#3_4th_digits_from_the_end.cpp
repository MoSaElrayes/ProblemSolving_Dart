// ● Write a program that reads an integer and print the 4th from the right side. If
// no such digit, print 0
// ● Inputs => outputs
// ○ 15 => 0
// ○ 125 => 0
// ○ 1000 => 1
// ○ 5001 => 5
// ○ 1234 => 1
// ○ 654321 => 4
// ○ 99999 => 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << (num / 1000) % 10;

    return 0;
}