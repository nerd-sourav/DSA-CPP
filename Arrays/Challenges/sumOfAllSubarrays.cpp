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
    int sm = 0;
    for (int i = i; i < n; i++)

    {
        sm = 0;
        for (int j = i; j < n; j++)
        {
            sm += arr[j];
            cout << sm << endl;
        }
    }

    return 0;
}
