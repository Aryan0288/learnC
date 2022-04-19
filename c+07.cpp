#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    float n1, n2;
    cin >> n1 >> n2;
    cout << "Input 2 number: "<<n1<<n2<<endl;

    char op;
    cin >> op;
    cout << "input an operator "<<op<<endl;
    

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        break;
    }
    return 0;
}
