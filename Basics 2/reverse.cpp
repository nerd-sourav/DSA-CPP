#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    int r, q;
    while (n > 0)
    {
        r = n % 10;
        q = int(n / 10);
        reverse = reverse * 10 + r;
        n = q;
    }
    cout << reverse;

    return 0;
}