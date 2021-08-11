#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = -1;
    int mx = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > mx)
        {
            ans++;
        }
        mx = max(ans, mx);
    }
    cout << ans;
}
