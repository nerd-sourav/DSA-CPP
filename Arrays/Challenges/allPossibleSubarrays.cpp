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
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int summ = 0;
            for (int k = i; k <= j; k++)
            {
                summ += arr[k];
            }
            maxSum = max(maxSum, summ);
        }
    }
    cout << maxSum;
    return 0;
}
