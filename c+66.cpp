#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 2nd method for convert string in lower to uper

int main()
{
    string s = "abcdefghijklmn";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s;
}