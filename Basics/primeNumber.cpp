#include <iostream>
using namespace std;
int main()
{
    int testNumber;
    cin >> testNumber;
    int i;
    for (int i = 2; i < testNumber; ++i)
    {
        if (testNumber % i == 0)
        {
            cout << "Not Prime" << endl;
            break;
        }
    }
    if (i == testNumber - 1)
    {
        cout << "Prime" << endl;
    }
    return 0;
}