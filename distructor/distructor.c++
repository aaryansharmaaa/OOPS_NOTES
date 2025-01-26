#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Hero
{

private:
    int age;

public:
    static int timeTOcomplet;

    Hero() // Constructor is created...
    {
        cout << "Constructor is called here" << endl;
    }

    ~Hero() // This is how distructor is created....
    {
        cout << "Distructor is created...." << endl;
    }

    static int printing(){//Static function are those function they can accessed only startic member...
        cout<<timeTOcomplet<<endl;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int n)
    {
        age = n;
    }
};

int Hero::timeTOcomplet=5;//THis is how startic member are initlized...

int main()
{
    Hero ramesh; // Statically created object...

    cout<<Hero::timeTOcomplet<<endl;
    cout<<Hero::printing();

    /*
    VERY IMPORTANT THING IF OBJECT IS STATICALLY CREATED THEN DISTRUCTOR IS AUTOMATICALLY CALLED
    BUT WHEN IT IS DYNAMICALLY MADE THEN WE HAVE TO CALLED IT MANUALLY...
    */

    Hero *a = new Hero(); // Dynamically created object...

    delete a; // This is how we called distructor for dynamically called object...
    ramesh.setAge(50);
    cout << ramesh.getAge() << endl;

    return 0;
}

// What is a distructor??

// Distructor is a special kind of function that called when object is goes out of scope (MEANS WHEN OBJECT IS CREATED AND THE
//  NEED OF OBJECT IS OVER SO IT WILL DEALOCATE THE MEMORY ASSIGNED TO THE OBJECT)

// DISTRUCTOR DONT'T HAVE ANY RETURN TYPE...
// DISTRUCTOR NAME IS SAME AS OF CLASS...
// DISTRUCTOR DON'T HAVE ANY RETURN TYPE...

//What is static data member??

//Static data member are the kind of data member that can be accesed without using the object..


//What are static function???
//Static function are kind of function that are accesed using class withoud object??..(STATIC FUNCTION CAN ONLY ACCESS STATIC MEMBER)