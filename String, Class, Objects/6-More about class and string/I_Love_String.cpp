#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s, t, st;
        cin >> s >> t;

        for (int i = 0, j = 0; i < s.size() || j < t.size(); i++, j++)
        {
            if (i < s.size())
                st += s[i];

            if (j < t.size())
                st += t[j];
        }

        cout << st << endl;
    }

    return 0;
}