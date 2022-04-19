#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int arr[a] = {0};
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "[ ";
    for (int i = a - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << "]";

    return 0;
}