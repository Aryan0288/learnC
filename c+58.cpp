#include <iostream>
using namespace std;

// cahracter array;

int main()
{
    char arr[100] = "apple";
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << " ";
        i++;
    }
    return 0;
}