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
    int totalSum = 0;
    int negativeArray[n];
    for (int i = 0; i < n; i++)
    {
        negativeArray[i] = (-1) * arr[i];
        totalSum += arr[i];
    }

    //applying Kadane's Algo on -vearray

    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += negativeArray[i];
        if (currentSum <= 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << totalSum << endl;
    cout << maxSum << endl;

    int ans;
    ans = totalSum + maxSum;
    cout << ans;

    return 0;
}
