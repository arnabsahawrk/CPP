#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int age;
    int marks;
};

bool customCompareFunction(Student l, Student r) { return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks; }

int main()
{
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
        cin >> students[i].name >> students[i].roll >> students[i].age >> students[i].marks;

    sort(students, students + n, customCompareFunction);

    for (int i = 0; i < n; i++)
        cout << students[i].name << " " << students[i].roll << " " << students[i].age << " " << students[i].marks << endl;

    return 0;
}