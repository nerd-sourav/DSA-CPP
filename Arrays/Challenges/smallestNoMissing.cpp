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
    int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        check[arr[i]] = true;
    }
    int ans = -1;
    for (int i = 0; i < 10; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }
    cout << ans;

    return 0;
}
