#include <iostream>
using namespace std;
class defcon
{
    int a, b;

public:
    defcon()
    {
        a = 5;
        b = 6;
    }
    void display()
    {
        cout << "Default values are: " << a << " " << b << "\n";
    }
    ~defcon()
    {
        cout << "Object Destroyed\n";
    }
};
int main()
{
    defcon obj1, obj2;
    obj1.display();
    obj2.display();
    return 0;
}