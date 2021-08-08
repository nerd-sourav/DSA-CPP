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

    int ans = 2;
    int diff = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        diff = arr[i + 1] + arr[i];
        for (int j = 2; j < n; i = j++)
        {
            if (arr[j - 1] - arr[j] == diff)
            {
                ans++;
            }
        }
    }

    return 0;
}
