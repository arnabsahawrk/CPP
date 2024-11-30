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

int main()
{
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
        cin >> students[i].name >> students[i].roll >> students[i].age >> students[i].marks;

    Student minMarks, maxMarks;
    minMarks.marks = students[0].marks;
    maxMarks.marks = students[0].marks;

    for (int i = 0; i < n; i++)
    {
        if (minMarks.marks > students[i].marks)
            minMarks = students[i];
        else if (maxMarks.marks < students[i].marks)
            maxMarks = students[i];
    }

    cout << maxMarks.name << " " << maxMarks.roll << " " << maxMarks.age << " " << maxMarks.marks << endl;

    cout << minMarks.name << " " << minMarks.roll << " " << minMarks.age << " " << minMarks.marks << endl;

    return 0;
}