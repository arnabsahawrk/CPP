#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[100];
};

int main()
{
    Cricketer *Dhoni = new Cricketer;
    Dhoni->jersey_no = 11;
    strcpy(Dhoni->country, "India");

    // cout << Dhoni->jersey_no << " " << Dhoni->country << endl;

    Cricketer *Kholi = new Cricketer;
    // Kholi = Dhoni;
    // delete Dhoni;
    // cout << Kholi->jersey_no << " " << Kholi->country << endl; // So, When I created a dynamic object named Kholi and copy the data from the Dhoni object, the Dhoni object gave me the address of the its object because it's pointer and then I delete Dhoni and when I did that the dhoni address deleted and when kholi get there he couldn't found anything.
    Kholi->jersey_no = Dhoni->jersey_no;
    strcpy(Kholi->country, Dhoni->country);
    delete Dhoni;
    cout << Kholi->jersey_no << " " << Kholi->country << endl; // Now what is happning is when I copy the kholi data from dhoni data and then delete dhoni becuse I manually copied the data didn't pass the pointer.

    return 0;
}