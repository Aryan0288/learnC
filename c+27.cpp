#include <iostream>
using namespace std;

int main()
{
    int mx = -19999999;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     mx = max(mx, arr[i]);
    // }

    // cout << mx << " ";

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout << curr << endl;
        }
    }

    return 0;
}