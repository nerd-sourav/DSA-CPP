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
    int S;
    cin >> S;
    int i = 0;
    int j = 0;
    int st = -1, en = -1;
    int sum = 0;
    while (sum + arr[j] <= S && j < n)
    {
        sum += arr[j];
        j++;
    }
    if (sum == S)
    {
        cout << i << j << endl;
        return 0;
    }
    else
    {
        while (j < n &&)
        {
            /* code */
        }
    }

    return 0;
}
