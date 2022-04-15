#include <bits/stdc++.h>
using namespace std;
class room
{
    int l, b, h;

public:
    void input()
    {
        cout << "Enter length, breadth and height\n";
        cin >> l >> b >> h;
    }
    void area()
    {
        cout << "Area of the room : " << (2 * ((l * b) + (b * h) + (h * l))) << "\n";
    }
    void volume()
    {
        cout << "Volume of the room: " << (l * b * h) << "\n";
    }
};
int main()
{
    room ob1;
    ob1.input();
    ob1.area();
    ob1.volume();
    return 0;
}