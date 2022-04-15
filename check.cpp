#include <iostream>
int main()
{
    int t, x, w10, w5, v5v;
    std::cin >> t;
    if (t >= 1 && t <= 1000)
    {
        while (t--)
        {
            std::cin >> x;
            if (x >= 1 && x <= 1000)
            {
                if (x % 5 != 0)
                {
                    std::cout << -1 << std::endl;
                    break;
                }
                else
                {
                    w10 = x % 10;
                    v5v = x / 10;
                    w5 = w10 / 5;
                    std::cout << v5v + w5 << std::endl;
                }
            }
        }
    }
}