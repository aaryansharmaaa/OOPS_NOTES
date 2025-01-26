#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Student
// This simple class Student is basically the incapsulation (where the collection of data member and function are )
// in the for  of class...
{
private:
    string name;
    int age;
    int height;

public: 
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student aaryan;

    return 0;
}

/*
What is encapsulation??
Encapsulation is the process where we are combining the data member and function together into a single unit(CLASS) is called incapsulation...

Fully incapsulation is bassically where all the data member are private...

Advantage--->

USED TO HIDE THE DATA...

We can also make our calss read only... (MEANS WE CAN ONLY MAKE GETTER FUNCTION NOT THE SETTER)..

used in unit testing...

code reusability increases...
*/