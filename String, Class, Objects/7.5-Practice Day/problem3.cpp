#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence, word;
    getline(cin, sentence);
    stringstream words;
    words << sentence;

    cin >> word;

    int count = 0;

    while (words >> sentence)
    {
        if (word == sentence)
            count++;
    }

    cout << count;

    return 0;
}