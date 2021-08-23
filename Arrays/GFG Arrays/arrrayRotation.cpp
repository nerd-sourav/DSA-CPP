#include <iostream>
#include <cmath>
using namespace std;
void rotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
void dTimes(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        rotateByOne(arr, n);
    }
}

void printing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int testCases;
    cin >> testCases;
    for (int times = 0; times < testCases; times++)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        dTimes(arr, n, d);
        printing(arr, n);
    }

    return 0;
}