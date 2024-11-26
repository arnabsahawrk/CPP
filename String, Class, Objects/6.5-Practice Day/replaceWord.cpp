#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    while (1)
    {
        int pos = str.find("EGYPT");

        if (pos >= 0)
            str.replace(pos, 5, " ");
        else
            break;
    }

    cout << str;
    return 0;
}