#include <iostream>
using namespace std;
class defcon
{
    int a, b;

public:
    defcon(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Parameters passed: " << a << " " << b << "\n";
    }
    ~defcon()
    {
        cout << "Object Destroyed\n";
    }
};
int main()
{
    defcon obj1(2, 3);
    defcon obj2(5, 6);
    obj1.display();
    obj2.display();
    return 0;
}