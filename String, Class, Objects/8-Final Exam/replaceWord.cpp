#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string first, second;
        cin >> first >> second;

        int pos = first.find(second);
        while (pos <= first.size())
        {
            first.replace(pos, second.size(), "#");
            pos = first.find(second);
        }

        cout << first << endl;
    }

    return 0;
}