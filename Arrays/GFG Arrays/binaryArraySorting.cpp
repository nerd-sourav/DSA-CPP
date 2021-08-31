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
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
    }
    int ones = n - zero;
    cout << size(arr);
    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for (int i = zero; i < n; i++)
    {
        arr[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
