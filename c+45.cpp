#include <iostream>
using namespace std;

class addamont
{
    int initialamnt = 50;

public:
    addamont()
    {
        cout << initialamnt << endl;
    }
    addamont(int a)
    {
        initialamnt += a;
        cout << initialamnt << endl;
    }
};

int main()
{
    addamont obj;
    addamont obj1(10);
}