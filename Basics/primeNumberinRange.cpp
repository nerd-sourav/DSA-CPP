#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int j;
        //initialize only once... 
        //new value will be created each time
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {

                break;
            }
        }
        if (j == i)
        {
            cout << j << endl;
        }
    }

    return 0;
}