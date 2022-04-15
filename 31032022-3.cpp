#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three numbers\n";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
            cout << a << " is greatest of the three\n";
        else
            cout << c << " is greatest of the three\n";
    }
    else if (b > c)
        cout << b << " is greatest of the three\n";
    else
        cout << c << " is greatest of the three\n";
    return 0;
}