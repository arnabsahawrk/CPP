#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    string str = "Hello World";

    reverse(array, array + n);
    reverse(str.begin(), str.end());

    for (int numb : array)
        cout << numb << " ";

    cout << endl
         << str << endl;
    return 0;
}