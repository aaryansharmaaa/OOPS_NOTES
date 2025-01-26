#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
// #include "Hero.c++" //This is the another method where we create a file of class in different file ans use it just include it over here...
using namespace std;

class Hero // This is how we define a class...
{
private: // These are the properties that can be accesed only inside the calsss.... WE CAN ONLY USE THEM INSIDE THE CLASS NOT OUTSIDE THE CLASS..
    int value;

public: // Whet ever written under public can be accessed all over the program.... UNDER
    int health;
    char level;

    int getvalue() // This is how we can access the private property of the class....
    {
        return value;
    }

    void setvalue(int n) // This is how we can set the value in the private...
    {
        value = n;
    }
};

int main()
{
    Hero h1; // Creating the object of the class. THIS IS STATC TYPE OF HERO...

    Hero *h2= new Hero;//This is dynamically type hero...

    h2->setvalue(14);
    cout<<h2->getvalue()<<endl;//This is how the dynamin created object is called with function...

    h1.health = 45; // This is how we assing a value...
    h1.level = 'A';

    cout << h1.health; // This is how we can acces the properties of the class...
    cout << h1.level;

    h1.setvalue(40);               // calling the getter value...
    cout << h1.getvalue() << endl; // setting the value...

    cout << "The size of the class is " << sizeof(h1); // If class is empty then 1 byte of memory is alocated to it...
    return 0;
}