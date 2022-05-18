#include <iostream>
using namespace std;
class vol
{
    int a, b;

public:
    vol()
    {
        a = 5;
        b = 10;
    }
    vol(int x, int y)
    {
        a = x;
        b = y;
    }
    vol(int x, int y, int z1, int z = 0)
    {
        a = x + z1;
        b = y + z;
    }
    void display()
    {
        cout << "Initialized values are: " << a << " " << b << "\n";
    }
};
int main()
{
    vol ob1;
    ob1.display();
    vol ob2(3, 7);
    ob2.display();
    vol ob3(2, 5, 8);
    ob3.display();
    vol ob4(2, 5, 8, 6);
    ob4.display();
    return 0;
}
