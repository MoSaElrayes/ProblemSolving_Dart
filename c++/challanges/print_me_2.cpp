/*

Given 8 space-separated integers, find the sum of those in even places and the sum of those in odd places.
Note: Even place means the 2nd, 4th, 6th or 8th numbers, while odd places are the 1st, 3rd, 5th and 7th numbers.

Example Input:
11 2 7 9 12 -8 3 -1

Example Output:
2 33

Example Explanation:
2 + 9 + (-8) + (-1) = 2
11 + 7 + 12 + 3 = 33
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	int equ_is_1 = a * a;
	int equ_is_not_1 = 2 * a + 1;

	int is_1 = (b + 1) / 2;
	int is_neg_1 = 1 - is_1;

	cout << (is_1 * equ_is_1) + (is_neg_1 * equ_is_not_1);

	return 0;
}
