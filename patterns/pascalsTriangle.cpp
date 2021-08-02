// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
//pascals triangle;

#include <iostream>
using namespace std;
int fact(int n)
{
    int sum = 1;
    for (int i = 2; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int ans = fact(i) / (fact(i - j) * fact(j));
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}