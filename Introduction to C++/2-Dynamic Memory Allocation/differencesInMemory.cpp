#include <bits/stdc++.h>
using namespace std;

int *a, *b;

void staticMemory()
{
    int x = 10;
    a = &x;
    cout << "Static Memory--> " << *a << endl;
}

void dynamicMemory()
{
    int *x = new int;
    *x = 100;
    b = x;
    cout << "Dynamic Memory--> " << *b << endl;
}

int main()
{
    staticMemory();
    dynamicMemory();

    cout << "Static Memory Form Main--> " << *a << endl;
    cout << "Dynamic Memory From Main--> " << *b << endl;
    return 0;
}