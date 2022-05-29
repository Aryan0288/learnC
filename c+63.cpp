#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

void increment(int a)
{
    a++;
    cout << a << endl;
}
int main()
{

    int a = 2, b = 4;
    // increment(a);
    // cout << a << endl;
    swap1(a, b);
    return 0;
}