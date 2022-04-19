#include <iostream>
using namespace std;

class area
{
    int len, brth;

public:
    area()
    {
        len = 0;
        brth = 0;
        cout << len * brth << endl;
    }

    area(int a)
    {
        len = a;
        brth = a;
        cout << len * brth << endl;
    }

    area(int a, int b)
    {
        len = a;
        brth = b;
        cout << len * brth << endl;
    }
};

int main()
{
    area obj(2, 3);
    area obj1;
    area obj2(1);
}