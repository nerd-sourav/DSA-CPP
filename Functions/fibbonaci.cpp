#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << sum << endl;
        a = b;
        b = sum;
        sum = a + b;
    }
}

int main()
{

    int n;
    cin >> n;
    fib(n);
    return 0;
}