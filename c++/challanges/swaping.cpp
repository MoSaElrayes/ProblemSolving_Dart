/*
Homework 8: Print Me


Write a program that reads 2 integers A, B
    B is either -1 or 1
If -1, print 2*A+1
If 1, print A*A

However, you need to assume the following
    Don’t use if conditions, if you know them
    Don’t use comparison operators (e.g. ==, <=, >=, etc)
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int equ_is_1 = a * a; 
    int equ_is_neg_1 = 2 * a + 1; 
    
    // b = 1 or -1 => convert to [ b = 1 to 1 || b = -1 to 0 ]
    int is_b_equ_1 = (b + 1) / 2;
    int is_b_equ_neg_1 = 1 - is_b_equ_1;

    //	B is either -1 or 1 => If 1, print A*A => If -1, print 2*A+1
    cout << (is_b_equ_1 * equ_is_1) + (is_b_equ_neg_1 * equ_is_neg_1) << endl;
       //       0 * 4    +       1 * 5
       //       1 * 4    +       0 * 5
    return 0;
}
