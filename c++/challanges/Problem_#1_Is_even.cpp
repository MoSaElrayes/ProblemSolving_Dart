// ● The following code reads an integer and computes
// a boolean if the number is even in 3 different ways.
// ● Fill in the is_even to solve the problem in 3 ways as
// following
// ● Using only %2
// ● Using only /2
// ● Using only %10

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double num;
    cin >> num;

    bool is_even_mod = int(num) % 2 == 0;
    cout << "is_even_1 " << is_even_mod << endl;

    int num_wihout_frac = num / 2;
    bool is_even_2 = num / 2 - num_wihout_frac == 0;
    cout << "is_even_2 " << is_even_2 << endl;

    int last_digit = int(num) % 10;
    //evevn last digit is 0 , 2 , 4 , 6 , 8
    bool is_even_3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
    cout << "is_even_3 " << is_even_3 << endl;

    return 0;
}