#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int slab1(int a)
{
    int tax = 0;
    if (a < 100000)
    {
        tax = 0.1 * a;
        return tax;
    }
    else
    {
        tax = 0.1 * 100000;
        return tax;
    }
}
int slab2(int a)
{
    if (a <= 0)
    {
        return 0;
    }
    int tax = 0;
    if (a < 300000)
    {
        tax = 0.2 * a;
        return tax;
    }
    else
    {
        tax = 0.2 * 300000;
        return tax;
    }
}
int slab3(int a)
{
    if (a <= 0)
    {
        return 0;
    }
    int tax = 0;
    tax = 0.3 * a;
    return tax;
}
int taxcalculator(int a, int b)
{
    int final;
    if (b >= 100000)
    {
        final = a - 100000;
    }
    else
    {
        final = a - b;
    }
    int slab_1, slab_2, slab_3;
    if (final < 100000)
    {
        return 0;
    }
    else
    {
        final = final - 100000;
        slab_1 = slab1(final);
        final = final - 100000;
        slab_2 = slab2(final);
        final = final - 300000;
        slab_3 = slab3(final);
        return slab_1 + slab_2 + slab_3;
    }
}
int main()
{
    int salary, savings;
    cin >> salary >> savings;
    cout << taxcalculator(salary, savings);
}
