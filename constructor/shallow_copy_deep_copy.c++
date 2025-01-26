#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr = new double; // The cgpa is dynamically allocated variable...

    Student(string name, double cgpa)
    {
        this->name = name;
        *cgpaPtr = cgpa;
    }

    Student(Student &temp)
    {
        this->name = temp.name;
        this->cgpaPtr = temp.cgpaPtr;
    }

    void info()
    {
        cout << "The name of the student is " << name << endl;
        cout << "The cgpa of the student is " << *cgpaPtr << endl;
    }
};

int main()
{
    Student st("Aaryan sharma ", 6.45);

    Student s2(st); // Create the copy...

    st.info();

    cout << endl;
    *(s2.cgpaPtr) = 7.55; // The value of cgpa for s2 is change not for st this is the problem with the deep copy...

    st.info();

    return 0;
}

/*

Shallow coyp or deep copy ---> Shallow copy is basically the concept when we copy one object to another object normally it is
called shallow copy,

Deep copy is allocate in the Heap when we are doing thing dynamically...

So this is the problem witht he shallow copy that when ever we are going to create a copy and make change in it it is going
to change for perticular object which we are targeting because we are pointing towards the same adress..
*/