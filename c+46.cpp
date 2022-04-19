#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int b[n];
    int i;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] << " ";
    }
    cout << "\n";

    for (int i = n - 1; i >= 0; i--)
    {
        b[n] = a[i];
        cout << b[n] << " ";
    }
}