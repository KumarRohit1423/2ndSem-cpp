#include <iostream>
using namespace std;
class first
{
    int a, b;
    static int obj_count;

public:
    first(int a1, int b1)
    {
        a = a1;
        b = b1;
        obj_count++;
        display();
    }
    void display()
    {
        cout << "Object Number: " << obj_count << "\n";
        cout << "Values Entered: " << a << " " << b << "\n";
    }
    static int getcount()
    {
        return (obj_count);
    }
};
int first::obj_count = 0;
int main()
{
    first ob1(4, 8);
    cout << "\n";
    first ob2(3, 7);
    cout << "\nTotal Number of objects: " << first::getcount();
    return 0;
}