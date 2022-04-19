#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum1 = 0, sum2 = 0, d = 0, e = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[j];
            sum1 += a[j];
        }
        d = max(sum1, sum2);
        if (d > sum1)
        {
            e = i;
        }
        else
        {
            e = n;
        }
        sum2 = sum1;
        sum1 = 0;
    }

    cout << e << " ";

    return 0;
}