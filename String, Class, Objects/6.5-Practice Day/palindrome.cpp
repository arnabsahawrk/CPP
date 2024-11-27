#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 0, j = str.size() - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}