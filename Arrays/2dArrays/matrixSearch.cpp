#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int target;
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    int row = 0;
    int col = n - 1;
    while (row < n && col < m)
    {

        if (arr[row][col] == target)
        {

            cout << "true";
            return 0;
        }
        else if (arr[row][col] > target)
        {
            col--;
        }
        else if (arr[row][col] < target)
        {
            row++;
        }
        cout << endl;
    }
    cout << "false";

    return 0;
}
