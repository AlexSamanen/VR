#include "student.h"

Student::Student(string n, int a)
{
    name = n;
    age = a;
}

string Student::getName()
{
    return name;
}

void Student::setName(string newName)
{
    name = newName;
}

int Student::getAge()
{
    return age;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

void Student::printStudentInfo()
{
    cout << "Nimi: " << name << " Ika: " << age << endl;
}
