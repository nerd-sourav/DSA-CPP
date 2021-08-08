#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int var = 0;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> var;
        if (var % k == 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}