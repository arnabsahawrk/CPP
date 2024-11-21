#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int unqID;
    char name[101];
    char section;
    int totalMarks;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student std1, std2, std3;

        cin >> std1.unqID;
        cin.ignore();
        cin >> std1.name;
        cin.ignore();
        cin >> std1.section >> std1.totalMarks;

        cin >> std2.unqID;
        cin.ignore();
        cin >> std2.name;
        cin.ignore();
        cin >> std2.section >> std2.totalMarks;

        cin >> std3.unqID;
        cin.ignore();
        cin >> std3.name;
        cin.ignore();
        cin >> std3.section >> std3.totalMarks;

        if (std1.totalMarks >= std2.totalMarks && std1.totalMarks >= std3.totalMarks)
            cout << std1.unqID << " " << std1.name << " " << std1.section << " " << std1.totalMarks << endl;

        else if (std2.totalMarks >= std1.totalMarks && std2.totalMarks >= std3.totalMarks)
            cout << std2.unqID << " " << std2.name << " " << std2.section << " " << std2.totalMarks << endl;

        else
            cout << std3.unqID << " " << std3.name << " " << std3.section << " " << std3.totalMarks << endl;
    }

    return 0;
}