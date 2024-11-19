#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    float gpa;
};

int main()
{

    Student arnab, arna;
    /* arnab.gpa = 4.17;
     arnab.roll = 19;
     char temp[50] = "Arnab Saha";
     strcpy(arnab.name, temp); */

    cin.getline(arnab.name, 50);
    cin >> arnab.roll >> arnab.gpa;
    cin.ignore(); // getchar()
    cin.getline(arna.name, 50);
    cin >> arna.roll >> arna.gpa;

    cout << arnab.name << " " << arnab.roll << " " << fixed << setprecision(2) << arnab.gpa << endl;
    cout << arna.name << " " << arna.roll << " " << arna.gpa << endl;

    return 0;
}