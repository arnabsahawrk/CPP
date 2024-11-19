#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int minNumber = min({a, b, c});
    int maxNumber = max({a, b, c});

    cout << minNumber << " " << maxNumber << endl;
    return 0;
}