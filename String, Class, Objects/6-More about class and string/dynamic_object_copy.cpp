#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string name;
    int jerseyNo;

    Cricketer(string name, int jerseyNo)
    {
        this->name = name;
        this->jerseyNo = jerseyNo;
    }
};

int main()
{

    Cricketer *dhoni = new Cricketer("MS Dhoni", 90);
    Cricketer *kholi = new Cricketer("Virat Kholi", 18);

    cout << kholi->name << " " << kholi->jerseyNo << endl;

    *kholi = *dhoni;

    cout << kholi->name << " " << kholi->jerseyNo;

    return 0;
}