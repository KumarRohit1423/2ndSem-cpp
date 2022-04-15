#include <bits/stdc++.h>
using namespace std;
int main()
{
    string nam;
    int i, n, val;
    map<int, vector<string>> bg;
    for (i = 0; i < n; i++)
    {
        cin >> val >> nam;
        bg[val].push_back(nam);
    }
    for (auto val : bg)
    {
        cout << "Color number = " << val.first << "\n";
        for (auto val1 : val.second)
            cout << "Color = " << val1;
        cout << "\n";
    }
    return 0;
}