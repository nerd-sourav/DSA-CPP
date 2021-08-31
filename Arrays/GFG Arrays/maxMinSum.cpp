#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(a[i], maxNo);
    }
    for (int i = 0; i < m; i++)
    {
        minNo = min(b[i], minNo);
    }
    cout << maxNo + minNo;
    return 0;
}
