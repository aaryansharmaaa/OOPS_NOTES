#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Human //This is the parent class....
{
public:
    int height;
    int age;
    int weight;

    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human//This is the child class.. (That is inheriting from Human class and have access to all the data member of Human class)
{
public:
    string color="Green";

    void sleep()
    {
        cout << "Male sleeping";
    }
};

int main()
{
    Male obj1;//Object is created and the object have access of all the 

    cout << obj1.age << endl;
    obj1.setWeight(84);
    cout << obj1.weight << endl;
    cout << obj1.height << endl;
    cout << obj1.color << endl;
    obj1.sleep();

    return 0;
}

/*

What is inheritance??

Inheritance is basically the concept in object oriented programing where one class acquire the property or method of another class
from parent class to child class...

IF THE DATA MEMBER OF PARENT CLASS IS PRIVATE IT CAN'T BE INHERITED...

*/