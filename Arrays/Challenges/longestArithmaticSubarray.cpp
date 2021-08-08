#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pd = arr[1] - arr[0];
    int ans = 2;
    int current = 2;
    int i = 2;
    while (i < n)

    {
        if (pd == arr[i] - arr[i - 1])
        {
            current++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            current = 2;
        }
        ans = max(current, ans);
        i++;
    }
    cout << ans << endl;

    return 0;
}
