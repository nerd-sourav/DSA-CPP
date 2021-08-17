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
    int cumArr[n];
    for (int i = 0; i < n; i++)
    {
        cumArr[i] = cumArr[i] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << cumArr[i] << " ";
    }

    return 0;
}
