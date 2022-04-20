#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

            cin >> arr[n][m];
    }

    int r_st = 0, r_en = n - 1, c_st = 0, c_en = m - 1;

    while (r_st <= r_en && c_st <= c_en)
    {
        for (int col = c_st; col <= c_en; col++)
        {
            cout << arr[r_st][col] << " ";
        }

        r_st++;

        for (int row = r_st; row <= r_en; row++)

            cout << arr[row][c_en] << " ";

        c_en--;

        for (int col = c_en; col >= c_st; col--)

            cout << arr[r_en][col] << " ";

        r_en--;

        for (int row = r_en; row >= r_st; row--)
        {
            cout << arr[row][c_st] << " ";
        }

        c_st++;
    }

    return 0;
}