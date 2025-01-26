#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Base
{
public:
    virtual void printing()
    {
        cout << "Printing in th base class" << endl;
    }
};

class Derived : public Base
{
public:
    void printing() override
    {
        cout << "Printing in the derived class" << endl;
    }
};

class Derived2 : public Base
{
public:
    void printing() override
    {
        cout << "Printing in the derived2 class" << endl;
    }
};

int main()
{
    Base b1;
    b1.printing(); // This is how i can access the printing function of base class...
    Derived2 d2;
    Derived d1;
    d1.printing(); // Calling form the Derived class printing...
    d2.printing(); // Whose class object is created the function is classd of that class...
    return 0;
}

/*
What is virtual private function??

Virtual private function are basically the function that are actually exist in the class but can't be used... (SOMTHING THAT IS EXIST
IN APPERIENCE BUT NOT IN REALITY)

Virtuel function are the kind of function that are present in the parent class and they expect that derived class are going to 
override them...


VIRTUAL FUNCTION ARE ALSO THE SOLUTION FOR THE FUNCTION OVERIDING AND METHIOD OVERIDING...

*/