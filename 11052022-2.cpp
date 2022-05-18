#include <iostream>
#define pie 3.14
using namespace std;
class vol
{
    int ca, l, b, hc;
    float rs, rcy, hcy;

public:
    vol()
    {
        ca = 0;
        l = 0;
        b = 0;
        hc = 0;
        hcy = 0.0;
        rs = 0.0;
        rcy = 0.0;
    }
    int volume(int a)
    {
        ca = a;
        return (ca * ca * ca);
    }
    int volume(int a1, int a2, int a3)
    {
        l = a1;
        b = a2;
        hc = a3;
        return (l * b * hc);
    }
    float volume(float b1)
    {
        rs = b1;
        return (float(4.0 / 3.0) * pie * rs * rs * rs);
    }
    float volume(float b2, float b3)
    {
        rcy = b2;
        hcy = b3;
        return (pie * rcy * rcy * hcy);
    }
};
int main()
{
    vol obj;
    int ch, go = 0;
    do
    {
        go = 0;
        cout << "Enter: \n\t1 for volume of cube\n\t2 for volume of cuboid\n\t3 for volume of sphere\n\t4 for volume of cylinder\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int a;
            cout << "Enter side length of the cube: ";
            cin >> a;
            cout << "Volume of Cube : " << obj.volume(a) << "\n";
            break;
        }
        case 2:
        {
            int b, c, d;
            cout << "Enter length, breadth and height of the cuboid: ";
            cin >> b >> c >> d;
            cout << "Volume of Cuboid : " << obj.volume(b, c, d) << "\n";
            break;
        }
        case 3:
        {
            float e;
            cout << "Enter radius of the sphere: ";
            cin >> e;
            cout << "Volume of Sphere : " << obj.volume(e) << "\n";
            break;
        }
        case 4:
        {
            float f, g;
            cout << "Enter radius and height of the cylinder: ";
            cin >> f >> g;
            cout << "Volume of Cylinder : " << obj.volume(f, g) << "\n";
            break;
        }
        default:
        {
            cout << "Wrong choice";
            break;
        }
        }
        cout << "Enter 1 if you want to continue...\n";
        cin >> go;
    } while (go == 1);
    return 0;
}