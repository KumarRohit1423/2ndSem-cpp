#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    char c1, c2;
    getline(cin, s1);
    getline(cin, s2);
    cout << s1.size() << " " << s2.size() << "\n";
    cout << (s1 + s2) << "\n";
    c1 = s1[0];
    c2 = s2[0];
    s1 = s1.substr(1);
    s2 = s2.substr(1);
    cout << (c2 + s1) << " " << (c1 + s2);
    return 0;
}