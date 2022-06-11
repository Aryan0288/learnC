#include <iostream>
using namespace std;

int sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    int rstarr = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && rstarr);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << sorted(arr, n);
}