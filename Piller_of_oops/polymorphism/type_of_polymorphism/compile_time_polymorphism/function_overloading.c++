#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class A
{

public:
    void SayHello()
    {
        cout << "My name is aaryan sharma" << endl;
    }

    void sayHello(string name) // If we make change in the input parameter then the functios witht the same name can run easily...
    {
        cout << "My name is " << name << endl;
    }
    // (IF WE MAKE CHANGE IN THE RETURN TYPE THEN IT IS NOT GOING TO RUN MAKE CHANGE IN THE INPUT PARAMETRE)

    void seyHello(char ch)
    { // This will going to work because there is change in the argument from dtring to char...
        cout << "Hello";
    }

    int sayHello() // This is not going to work because the returntype is changed not the input paramater and there exist two function of same name..
    {
        return -1;
    }
};

int main()
{

    return 0;
};

/*

What is compile time polymorphism ??

When method to be evoked at the time of compile time is called compiled time polymorphism...

What is function overloading???

When there exist two function with the same name in the scope this phenomena is called function overloading...


*/