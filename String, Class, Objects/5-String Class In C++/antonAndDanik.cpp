#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, anton = 0, danik = 0;
    cin >> n;
    string str;
    cin >> str;

    while (n--)
    {
        if (str[n] == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
        cout << "Anton";
    else if (anton < danik)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}