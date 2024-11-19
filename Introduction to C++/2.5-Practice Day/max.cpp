#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxNumber = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        maxNumber = max(input, maxNumber);
    }

    cout << maxNumber;
    return 0;
}