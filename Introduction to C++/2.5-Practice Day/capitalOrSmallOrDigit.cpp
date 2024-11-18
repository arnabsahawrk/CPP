#include <bits/stdc++.h>
using namespace std;

int main()
{
    char letter;
    cin >> letter;

    if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
    {
        cout << "ALPHA" << endl;
        if (letter >= 'A' && letter <= 'Z')
            cout << "IS CAPITAL";
        else
            cout << "IS SMALL";
    }
    else
        cout << "IS DIGIT";
    return 0;
}