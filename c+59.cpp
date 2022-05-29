#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// input and output character array and check word is pallindrome or not;
int main()
{
    // int n;
    // cin >> n;
    // char arr[n + 1];
    // cin >> arr;
    // cout << arr << " ";

    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
        }
    }

    if (check == true)
    {
        cout << "Word is palindrome";
    }
    else
    {
        cout << "Word is not a palindrome";
    }
}