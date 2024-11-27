#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string teams;
        cin >> teams;
        int unique[26] = {0}, count = 0;

        for (int i = 0; i < n; i++)
        {
            if (unique[teams[i] - 'A'] == 0)
            {
                unique[teams[i] - 'A']++;
                count++;
            }
        }

        cout << count + n << endl;
    }
    return 0;
}