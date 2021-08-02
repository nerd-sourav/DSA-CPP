#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int y = n;
    int check = 0;
    while (n > 0)
    {
        int last = n % 10;
        check = check + pow(last, 3);
        cout << check << endl;
        n = int(n / 10);
    }
    if (check == y)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Non-Armstrong Number";
    }

    return 0;
}