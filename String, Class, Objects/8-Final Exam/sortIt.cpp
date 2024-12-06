#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool customCompareFunction(Student l, Student r)
{
    return (r.eng_marks + r.math_marks == l.eng_marks + l.math_marks) ? l.id < r.id : r.eng_marks + r.math_marks < l.eng_marks + l.math_marks;
}

int main()
{
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;

    sort(students, students + n, customCompareFunction);

    for (int i = 0; i < n; i++)
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;

    return 0;
}