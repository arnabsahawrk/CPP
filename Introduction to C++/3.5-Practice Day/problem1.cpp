#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[20];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(const char *name, int roll, char section, int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

Student highest_math_marks(Student std1, Student std2, Student std3)
{
    if (std1.math_marks > std2.math_marks && std1.math_marks > std3.math_marks)
        return std1;
    else if (std2.math_marks > std1.math_marks && std2.math_marks > std3.math_marks)
        return std2;
    else
        return std3;
}

int main()
{
    Student Arnab("Arnab Saha", 1, 'A', 96, 12);
    Student Joy("Joy Das", 2, 'B', 97, 12);
    Student Robin("Robin Mojumder", 3, 'A', 90, 12);

    Student thePerson = highest_math_marks(Arnab, Joy, Robin);

    cout << thePerson.name << " " << thePerson.roll << " " << thePerson.section << " " << thePerson.math_marks << " " << thePerson.cls;
    return 0;
}