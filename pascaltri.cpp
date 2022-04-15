#include <bits/stdc++.h>
using namespace std;
int fact(int num)
{
    int facto = 1;
    if (num == 0)
        return 1;
    else
    {
        while (num > 0)
        {
            facto = facto * num;
            num--;
        }
        return facto;
    }
}
int combin(int n, int r)
{
    int val;
    val = (fact(n) / (fact(n - r) * fact(r)));
    return val;
}
int main()
{
    int i, j, ub = 0, lb = 0, rw, rcount = 0, pcheck = 1, irw, spln = 1;
    cout << "Enter number of rows\n";
    cin >> rw;
    irw = rw;
    rw = (rw * 2) + 1;
    ub = (rw / 2) + 1;
    lb = ub;
    for (i = 0; i < irw; i++)
    {
        for (j = 0; j < ((rw * 2) + 1); j++)
        {
            if (j <= ub && j >= lb)
            {
                if (pcheck % 2 == 0)
                    cout << " ";
                else
                {
                    cout << spln; // combin((i), rcount);
                    rcount++;
                }
                pcheck++;
            }
            else
                cout << " ";
        }
        spln = 1;
        cout << "\n";
        ub += 1;
        lb -= 1;
        rcount = 0;
        pcheck = 1;
    }
}