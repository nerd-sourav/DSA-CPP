#include <iostream>
#include <cmath>
using namespace std;
int hexToDec(string n)
{
    int s = n.size();
    int x = 1;
    int ans = 0;
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x = x * 16;
    }
    return ans;
}

int main()
{

    string n;
    cin >> n;
    cout << hexToDec(n) << endl;

    return 0;
}