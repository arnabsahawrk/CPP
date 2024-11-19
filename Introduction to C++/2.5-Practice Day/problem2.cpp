#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *array = new int[n];
    // for (int i = 0; i < n; i++)
    //     cin >> array[i];
    for (int i = 0; i < n; i++)
        cin >> *(array + i);

    int x;
    cin >> x;

    int *extendedArray = new int[x];
    // for (int i = 0; i < n; i++)
    //     extendedArray[i] = array[i];
    for (int i = 0; i < n; i++)
        *(extendedArray + i) = *(array + i);

    delete[] array;

    // for (int i = n; i < x; i++)
    // {
    //     int y;
    //     cin >> y;
    //     extendedArray[i] = y;
    // }
    for (int i = n; i < x; i++)
    {
        int y;
        cin >> y;
        *(extendedArray + i) = y;
    }

    // for (int i = 0; i < x; i++)
    //     cout << extendedArray[i] << " ";
    for (int i = 0; i < x; i++)
        cout << *(extendedArray + i) << " ";

    return 0;
}