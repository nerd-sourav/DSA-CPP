/* Check that there exist 2 element in an array such that 
their sum is equal to a given number k */
#include <iostream>
#include <cmath>
using namespace std;
bool check(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                return true;
            }
        }
    }
    return false;
}
bool checkOptimized(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
    }
    return false;
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
    int k;
    cin >> k;

    cout << checkOptimized(arr, n, k);
    //Brute force approach : find all possible pair sum
}
