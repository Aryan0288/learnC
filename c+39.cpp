#include <bits/stdc++.h>
using namespace std;

// Solve Acc. to kadane

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxsum = INT_MIN;
    int currsum = 0;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(currsum, maxsum);
    }

    cout << maxsum;
}