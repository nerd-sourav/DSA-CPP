// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i] xor arr[i + 1];
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
}
// } Driver Code Ends
