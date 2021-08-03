#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    int i = 0;
    while (n > 0)
    {
        s = s + (n % 10) * pow(2, i);
        i++;
        n = int(n / 10);
    }
    cout << s;

    return 0;
}