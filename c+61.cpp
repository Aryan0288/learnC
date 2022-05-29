#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// pointer
int main()
{
    int a = 20;
    int *ptr = &a;
    // cout << ptr << "\n";
    // cout << *ptr << "\n";
    // cout << &a << "\n";
    *ptr = 50;
    // cout << *ptr << "\n";
    // ptr++;
    // cout << ptr << "\n";
    // cout << &a << endl;

    int **q = &ptr;
    cout << *q << endl;
    cout << **q << endl;
}