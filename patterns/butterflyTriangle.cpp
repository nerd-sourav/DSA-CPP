

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int i = 1; i <= row; i++)
        {
            cout << "* ";
        }

        for (int col = 1; col <= 2 * n - 2 * row; col++)
        {
            cout << "  ";
        }
        for (int i = 1; i <= row; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = n; row >= 1; row--)
    {
        for (int i = 1; i <= row; i++)
        {
            cout << "* ";
        }

        for (int col = 1; col <= 2 * n - 2 * row; col++)
        {
            cout << "  ";
        }
        for (int i = 1; i <= row; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}