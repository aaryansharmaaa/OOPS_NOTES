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
    int height;
    void setAge(int ag)
    {
        this->age = ag;
    }

    int getAge()
    {
        return age;
    }
};

class Human : protected Parent // When child class is protected then it can not be accessible outside the vlass without the getter
//   and setter function...
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
