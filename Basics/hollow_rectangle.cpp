#include <iostream>
using namespace std;
int main()
{

    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 or j == 0 or i == row - 1 or j == col - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout < < < < endl;
    }

    return 0;
}