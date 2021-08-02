#include <iostream>
using namespace std;

int fact(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans << endl;
    return 0;
}