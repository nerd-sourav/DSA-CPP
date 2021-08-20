#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_start = 0;
    int col_start = 0;
    int row_end = n - 1;
    int col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        for (int i = col_start; i <= col_end; i++)
        {

            cout << arr[row_start][i] << " ";
        }

        for (int i = row_start + 1; i < row_end; i++)
        {

            cout << arr[i][col_end] << " ";
        }
        for (int i = col_end; i >= col_start; i--)
        {

            cout << arr[row_end][i] << " ";
        }
        for (int i = row_end - 1; i >= row_start; i--)
        {

            cout << arr[i][col_start] << " ";
        }

        row_start++;
        col_start++;
        row_end--;
        col_end--;
    }
    return 0;
}