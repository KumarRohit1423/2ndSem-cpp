#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n, i, c = 0;
    cin >> n;
    int arr[n];
    vector<int> v;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    v.push_back(arr[0]);
    cout << v[0] << "\n";
    c = 0;
    for (i = 1; i < n; i++)
    {
        if (v[c] != arr[i])
        {
            v.push_back(arr[i]);
        }
        if (v[c] == arr[i])
        {
            v.pop_back();
        }
    }
    cout << v[0] << "\n";
    return 0;
}
