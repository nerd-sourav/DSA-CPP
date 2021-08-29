#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    int arr[n];
    int query[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q * 2; i++)
    {
        cin >> query[i];
    }
    int ans[q];
    for (int i = 0; i < q * 2; i = i + 2)
    {
        int sum = 0;
        int num = 0;
        for (int j = query[i]; j <= query[i + 1]; j++)
        {
            sum += arr[j];
            num++;
        }
        ans[i] = sum / num;
        cout << sum / num << endl;
    }
    for (int i = 0; i <= q; i++)
    {
        cout << ans[i];
    }

    return 0;
}
