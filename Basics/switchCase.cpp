#include <iostream>
using namespace std;
int main()
{

    char button;
    cout << "Enter the value :  ";
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "Hello!" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;

    default:
        cout << "I am still " << endl;
        break;
    }

    return 0;
}