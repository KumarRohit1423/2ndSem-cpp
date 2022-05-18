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
    friend void operator-(over &ob);
    void display()
    {
        cout << "Value : " << x << "\n";
    }
};
void operator-(over &ob)
{
    ob.x = -ob.x;
    // cout << "Value : " << ob.x << "\n";
}
int main()
{
    int a;
    cout << "Enter a number to be negated : ";
    cin >> a;
    over ob(a);
    cout << "Original "
         << "\n";
    ob.display();
    cout << "After Operation "
         << "\n";
    // operator-(ob);
    -ob;
    ob.display();
    return 0;
}