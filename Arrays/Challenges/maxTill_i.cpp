#include <iostream>
#include <cmath>
using namespace std;
int maxTill(int arr[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i], mx);
        cout << mx;
        }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxTill(arr, n);
    return 0;
}
