#include <iostream>
using namespace std;

void towerofhanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    cout << "movefrom1 " << src << " to1 " << dest << endl;
    towerofhanoi(n - 1, src, helper, dest);
    cout << "movefrom " << src << " to " << dest << endl;

    towerofhanoi(n - 1, helper, dest, src);
}

int main()
{
    towerofhanoi(3, 'A', 'C', 'B');
}