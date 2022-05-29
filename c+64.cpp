#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    swap1(&a, &b);
    cout << a << " " << b;
}