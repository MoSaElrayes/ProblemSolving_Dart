// ● We know N % M computes the remainder of division
// ● Write a program that reads 2 positive integers and print such reminder without
// using the modulus operator %
// ● Input: 27 12
// ● Output: 3
// ○ Remember in math: 27 % 12 = 3

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double fra = a / b;
    cout << a - (fra * b) << endl;
    /*
        a=3 , b = 5
        The closest you can get without going over is 3 x 5 = 15, 
        which is 4 less than 19.
        So 4 is the remainder
    */

    return 0;
}