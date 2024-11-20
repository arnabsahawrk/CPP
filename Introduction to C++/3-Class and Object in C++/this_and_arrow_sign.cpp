#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    float gpa;

    Student(int roll, int cls, float gpa)
    {
        (*this).roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(20, 11, 3.66);

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa;
    return 0;
}