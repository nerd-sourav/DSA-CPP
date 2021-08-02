#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool check = 0;
    for (int i = 2; i <= sqrt(n); i++) //a checking the number till its square root

    {

        if (n % i == 0)
        {
            cout << "Non-Prime" << endl;

            check = 1;
            break;
        }
    }

    if (check == 0)
    {
        cout << "Prime";
    }

    return 0;
}