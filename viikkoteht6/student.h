#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
public:
    Student(string n, int a);

    string getName();
    void setName(string newName);
    int getAge();
    void setAge(int newAge);
    void printStudentInfo();

private:
    string name;
    int age;
};

#endif // STUDENT_H
