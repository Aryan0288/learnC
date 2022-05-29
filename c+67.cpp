#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// form a no. greatest no. in a string.....

int main()
{
    string s = "125543";

    sort(s.begin(), s.end(), greater<int>());

    cout << s;
}