#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Animal
{
public:
    string bread;
};

class Dog : public Animal
{
public:
    string desi;
};

class GermanShepherd : public Dog // This is the example of multilevel inheritance Where the third class is deriver from second class...
{
public:
    string name;
};

int main()

{
    GermanShepherd aaryan;
    return 0;
}

/*
What is multilevel inheritance???

Multilevel inheritance is basically the process where one class is derived from another class and another class is derived for second class..

*/