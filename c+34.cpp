#include <iostream>
using namespace std;

class myclass
{
    // protected:
public:
    int var1;
    int fun()
    {
        int a = 10 + 10;
        // cout << a;
        return a;
    }
};

int main()
{
    myclass obj1;
    obj1.var1 = 10;
    cout << obj1.var1 << "  ";
    obj1.fun();
    cout << obj1.fun() << " ";
}