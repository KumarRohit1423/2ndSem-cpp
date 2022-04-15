#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "old numbers : " << a << " " << b << endl;
    t = a;
    a = b;
    b = t;
    cout << "new numbers : " << a << " " << b << endl;
    return 0;
}