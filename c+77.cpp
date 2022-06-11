#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return firstocc(arr, n, i + 1, key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int rstarr = lastocc(arr, n, i + 1, key);

    if (rstarr != -1)
    {
        return rstarr;
    }
    if (arr[i] == key)
    {
        return i;
    }

    return lastocc(arr, n, i + 1, key);
    // return i;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 5};
    cout << firstocc(arr, 5, 0, 2) << endl;
    cout << lastocc(arr, 5, 0, 2);
}