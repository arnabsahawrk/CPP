#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (array[i] != array[j])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}