#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
      void  speak() 
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Dog d1;
    d1.speak();
    return 0;
}

/*

What is run type polymorphism???

What methos is evoked at the time of run time is called runtione polymorphism...

what is function overriding (methos overriding)

when child class make chage in the inherit data according to the need is called function over riding or method over riding
exapmle --we createa class called human and there is a method in it called speaking and there is a another class called dog that inherit data from
human class but dog dosnt speak so the methos is not usefull fo the dog class so Dog class make change according to need...

THERE ARE SOME RULE FOR PERFOMING FUNCTION OVERRIDING

FUNCTION NAME MUST BE SAME...
NUMBER OF ARGUMENT MUST BE SAME...
IT CAN BE ACHIVED ONLY WITH THE HELP OF INHERITANCE...

*/