#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string digits;
        cin >> digits;

        int left = 0, right = 0;
        for (int i = 0, j = digits.size() - 1; i < 3; i++, j--)
        {
            left += digits[i] - '0';
            right += digits[j] - '0';
        }

        if (left == right)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}