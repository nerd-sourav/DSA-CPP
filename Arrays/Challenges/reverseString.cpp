#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str)
{
    for (int i = str.size(); i >= 0; i++)
    {
        string temp = str[i];
        str[i] = str[str.size() - i];
        str[str.size() - i] = temp;
    }
    return str;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}
