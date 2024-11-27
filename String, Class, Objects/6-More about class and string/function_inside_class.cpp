#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int salary;
    string address;

    Person(string name, int age, int salary, string address)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
        this->address = address;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{
    Person firstPerson("Arnab Saha", 25, 1200000, "Dhaka");
    Person secondPerson("Amya Das Joy", 27, 80000, "Dhaka");

    firstPerson.print();
    cout << endl;
    secondPerson.print();
    return 0;
}