#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mussum = 0;

    for (int i = 0; i < n; i++)
    {
        mussum += a[i];
    }

    int max = mussum % 2;

    if (mussum % 2 == 0)
    {
        max = max + 1;
    }
    else
    {
        max = max + 1;
    }
}