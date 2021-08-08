#include <iostream>

#include <iomanip>
using namespace std;
int main()
{
    int amount;
    double balance, rem;
    cin >> amount >> balance;
    if (amount % 5 == 0)
    {
        if (amount < balance && (amount + 0.5) <= balance)
        {
            rem = balance - amount - (0.5);
            cout << rem << endl;
        }
        else
        {
            cout << balance << endl;
        }
    }
    else
    {
        cout << balance << endl;
    }

    return 0;
}