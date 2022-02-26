#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, swap;
    cin >> a >> b >> c;
    swap = a;
    a = b;
    b = c;
    c = swap;
    cout << "a= " << a
         << "\nb= " << b
         << "\nc= " << c;
    return 0;
}