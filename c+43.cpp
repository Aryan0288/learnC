#include <iostream>
using namespace std;

class cons
{
    int id;

public:
    cons(int i)
    {
        id = i;
        cout << "constructor of the object = " << id << "\n";
    };

    ~cons()
    {
        cout << "distructor of the object = " << id << "\n";
    };
};

int main()
{
    cons obj(1);
    cons obj1(2);
    cons obj2(3);
}