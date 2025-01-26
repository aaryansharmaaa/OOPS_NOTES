#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Parent1//A class with 2 child class is the exapmle of herirchical inheritance...
{
public:
    void print()
    {
        cout << "Everything is printed here in Parent 1";
    }
};

class Child1 :public Parent1{
    public:
    
};

class Child2 : public Parent1
{

};

int main()
{
    Child1 c1;
    Child2 c2;
    return 0;
}
/*

What is herirchical in heritance.???

Herirchical inheritance is basically the process where one class served as parent class for more than one class

*/