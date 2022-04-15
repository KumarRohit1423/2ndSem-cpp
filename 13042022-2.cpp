#include <iostream>
using namespace std;
class one
{
    int a, b;

public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    friend int sumoftwo(one ob1);
};
int sumoftwo(one ob1)
{
    return (ob1.a + ob1.b);
}
int main()
{
    one ob1;
    ob1.input();
    cout << "Sum of the two numbers: " << sumoftwo(ob1);
    return 0;
}