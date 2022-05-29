#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// check the no. is power of n or not...
int ispower2(int n)
{
    return (n && !(n & n - 1));
}

// count the no. of ones in binary representation of a no.

int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

// write a program to generate to all possible value...

void subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & !(1 << j))
            // j=0,1,2,3
            {
                cout << arr[j] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    // cout << ispower2(8);
    // cout << numberofones(19);

    int arr[3] = {1, 2, 3};
    subset(arr, 3);
    // int a = 0;
    // cout << (1 & !(1 << 0));
}