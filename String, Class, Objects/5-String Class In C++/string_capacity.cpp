#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";

    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.capacity() << endl;

    // s.clear();

    // cout << s << s.size() << endl;

    // if (s.empty())
    //     cout << "Empty";
    // else
    //     cout << "Not Empty";

    s.resize(3);

    cout << s << endl;

    s.resize(5);

    cout << s << endl;

    s.resize(7, 's');

    cout << s << endl;

    return 0;
}