#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    float gpa;

    Student(int r, int c, float g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student rahim(20, 11, 3.66);

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa;
    return 0;
}