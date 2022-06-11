#include <iostream>
using namespace std;

// using recursion

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevsum = Sum(n - 1);
    return n + prevsum;
}

int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    int prev_sum = power(n, p - 1);
    return n * prev_sum;
}

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }

    // int prevfact = factorial(n - 1);
    return n * factorial(n - 1);
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // int n, p;
    // cin >> n >> p;
    // cout << power(n, p) << endl;

    int n;
    cin >> n;
    cout << fib(n) << endl;
}