#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Hero
{
private:
    int age;
    char chracter;


public:
    string name;
    char health;

    Hero() // Default constructor is created here...
    {
        cout << "The default constructor is created" << endl;
    }

    Hero(int age) // Paramatrize constructor...
    {
        cout << this << endl;
        this->age = age;
    }

    Hero(int age, char health) // Paramaterized constructor is created with 2 argument are pass...
    {
        this->age = age;
        this->health = health;
    }


    int geterAge() // Getter function...
    {
        return age;
    }

    void setAge(int n) // Seter function...
    {
        age = n;
    }

    void print(){
        cout<<this->age;
        cout<<endl;
        cout<<this->chracter;
    }
};

int main()
{
    Hero ramesh(20);

    cout << endl;

    // Hero * h1=new Hero(25)  This si the dynamic way of creating thr object to called the paramatrized constructor...

    cout << "Adress of ramesh is " << &ramesh << endl;

    Hero vinod(12, 'a');

    ramesh.setAge(25);
    cout << ramesh.geterAge();
    return 0;
}

// What is constructor ??
// Constructor is special kind of function that is automatically called when ever object is created ...

// Properties of constructor ...

// It don't have any return type...
// Constructor is called when ever object is created...
// Don't have any input parameter...

// what is default constructor...

// Default constructor is a constructor that is created when ever object is called... the purpose is to initlize the object with default value....

// What is paramaterized constructor???

// Paramaterized constructor is a type of constructor that take argument or parameter to create an object with specific value....