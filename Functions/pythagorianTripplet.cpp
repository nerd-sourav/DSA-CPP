#include <iostream>
#include <cmath>
using namespace std;
bool py(int a, int b, int c)
{
    int mx = max(a, max(b, c));
    int mn = min(a, min(b, c));
    int med = a + b + c - (mx + mn);

    if (pow(mx, 2) == (pow(mn, 2) + pow(med, 2)))
    {
        return true;
    }
    return false;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = py(a, b, c);
    cout << ans;

    return 0;
}