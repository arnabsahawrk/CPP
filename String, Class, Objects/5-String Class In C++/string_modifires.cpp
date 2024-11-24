#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello ";
    string s2 = "World";

    // s += s2;
    // s.append(s2);
    // s.push_back('A');
    // s.pop_back();

    // s = s2;
    // s.assign(s2);
    // s.erase(4, 2);
    // s.replace(6, 0, "Bangladesh");
    s.insert(6, "World");

    cout << s << endl;
    return 0;
}