#include <iostream>
using namespace std;

// Inclusion - Inversion Principal.

int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return c1 + c2 - c3;
}

// GCD -> Greatest Common Divisor
// Eulcid Algorithm

int gcd(int n, int a)
{
    while (a != 0)
    {
        int rem = n % a;
        n = a;
        a = rem;
    }
    return n;
}

int main()
{
    // int n, a, b;
    // cin >> n >> a >> b;
    // cout << divisible(n, a, b);

    int n, a;
    cin >> n >> a;
    cout << gcd(n, a);
}