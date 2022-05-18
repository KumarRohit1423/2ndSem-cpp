#include <iostream>
using namespace std;
class over
{
    int x;

public:
    over(int a = 0)
    {
        x = a;
    }
    void operator-()
    {
        x = -x;
    }
    void display()
    {
        cout << "Value : " << x << "\n";
    }
};
int main()
{
    int a;
    cout << "Enter a number to be negated : ";
    cin >> a;
    over ob(a);
    cout << "Original "
         << "\n";
    ob.display();
    -ob;
    cout << "After Operation "
         << "\n";
    ob.display();
    return 0;
}