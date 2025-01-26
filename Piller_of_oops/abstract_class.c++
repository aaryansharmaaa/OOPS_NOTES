#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Human// This is the abstract classs...
{
public:
    virtual void speak() = 0;  // This is pure virtual function...

    virtual void info()//Normal virtual function...
    {
        cout << "I am human" << endl;
    }
};

class Men : public Human
{
public:
    void speak() override//Implimenting the pure virtual function...
    {
        cout << "I am Men";
    }
    void info() override
    {
        cout << " I am Huma i used to speak" << endl;
    }
};

class Women : public Human
{
public:
    void speak() override
    {
        cout << "Womwn used to speak more" << endl;
    };

    void info() override
    {
        cout << "I am women i used to speak more" << endl;
    }
};

int main()
{
    Women w1;
    w1.info();
    w1.speak();

    cout<<endl;

    Men m1;
    m1.info();
    m1.speak();
    return 0;
}
/*
What are abstract class?

Abstract class are the special kind of classes that act as a blueprint for other classes , it contain at least one pure virtual function..

What are pure virtual functions...

Pure virtual function are those function that are declared withing the base class but dosnt have any implimentation in the
base class , insted they are overridden in the derived classes...(AND THERE EXECUTION ARE THERE IN DERIVED CLASS)


*/