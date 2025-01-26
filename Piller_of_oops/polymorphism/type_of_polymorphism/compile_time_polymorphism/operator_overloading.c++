#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    void operator+(B &obj) // The object is passed here...(JAISE HE PLUS SIGN DIKHAI DIYA TO OVERLOADING TRIGGRED HO GAI)...
    {
        int value1 = this->a; // value1 storing the value of a=5;
        int value2 = obj.a;   // value2 storing the value of obj2... a=25;
        cout << "Output " << value2 - value1 << endl;
    }

    void operator()()
    {
        cout << "Mai ekk operator huuu" << this->a << endl;
    }
};

int main()
{
    B obj1, obj2;

    obj1.a = 5;
    obj2.a = 25;

    obj1(); // Object1 one is calling the () operator so the value print is 5....

    obj1 + obj2;
    return 0;
}


/*

What is operator overloading ???

Operator overloading is one of the key concept of object oriented programing from compile time polymorphism where operators such as
+ - * / can be used to perform other tasks rather then performing the mathamatics operations...
(IN SIMPLE WORD WE CAN SAY THAT WE CAN PERFORM MORE THAN ONE OPERATION AT THE SAME TIME WITH THESE OPERATORS);

*/