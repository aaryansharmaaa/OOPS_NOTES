#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Animal
{

public:
    int height;
    int weight;

    void print()
    {
        cout << "Printing the values" << endl;
    }

    void bark()
    {
        cout << "The animal is barking" << endl;
    }
};

class Human
{
public:
    string color;

    void print()
    {
        cout << "Printing the values" << endl;
    }
    void speaking()
    {
        cout << "The human is speaking" << endl;
    }
};

class Hulam : public Animal, public Human // This is the third class that is derived from the two class human and Animal...
{
};
main()
{
    Hulam vinod;
    vinod.bark();
    vinod.speaking();

    vinod.Human::print();// When two function are of same name this is how we can assess them inside the main function...
    vinod.Animal::print();// In Animal ...
    return 0;
}
/*
What is multiple inheritance...

Multiple inheritance is basically the process where one class is derived from more than one class...

*/