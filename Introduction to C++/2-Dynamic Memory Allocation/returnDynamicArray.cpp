#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    // int x[5];
    int *x = new int[5];

    for (int i = 0; i < 5; i++)
        cin >> x[i];

    return x;
}

int main()
{
    int *x = fun();

    for (int i = 0; i < 5; i++)
        cout << x[i] << " ";
    return 0;
}