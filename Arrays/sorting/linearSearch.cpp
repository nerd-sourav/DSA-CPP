#include <iostream>
#include <cmath>
using namespace std;
int linearSearch(int n, int array[], int s)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == s)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int s;
    cin >> s;
    cout << linearSearch(n, array, s);

    return 0;
}