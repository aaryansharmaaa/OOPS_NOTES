#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Parent
{
private:
    int weight;
    int age;

public:
    int height; // Parent class where data member are public.
    void setAge(int ag)
    {
        this->age = ag;
    }

    int getAge()
    {
        return age;
    }
};

class Human : private Parent // The child class is private so we have to create a getter and setter function to access them...
{
public:
    string name;

    void print()
    {
        cout << "The value of the variaiton" << endl;
    }

    void setHeight(int m)
    {
        this->height = m;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    Human m1;
    m1.setHeight(789);
    cout << m1.getHeight();
}
