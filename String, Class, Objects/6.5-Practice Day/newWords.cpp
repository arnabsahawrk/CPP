#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int egypt[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;

        switch (s[i])
        {
        case 'e':
        case 'g':
        case 'y':
        case 'p':
        case 't':
            egypt[s[i] - 'a']++;
            break;

        default:
            break;
        }
    }

    int count = INT_MAX;
    for (char ch : {'e', 'g', 'y', 'p', 't'})
    {
        if (egypt[ch - 'a'] < count)
            count = egypt[ch - 'a'];
    }

    cout << count << endl;
    return 0;
}