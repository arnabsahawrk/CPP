#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << "Minimum number out of 2: " << min(a, b) << endl;
    cout << "Minimum number out of 4: " << min({a, b, c, d}) << endl;

    cout << "Maximum number out of 2: " << max(a, b) << endl;
    cout << "Maximum number out of 4: " << max({a, b, c, d}) << endl;

    swap(a, b);

    cout << "Swap A and B, " << "A: " << a << " " << "B: " << b << endl;
    return 0;
}