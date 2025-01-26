#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class A
{
public:
    void print1()
    {
        cout << "Printing in class A" << endl;
    }
};

class B : public A
{
public:
    void print2()
    {
        cout << "Printing is class B" << endl;
    }
};

class C : public A
{
public:
    void print3()
    {
        cout << "Printing is class B" << endl;
    }
};

class D : public B,public C{

};


/*
This is the example of hybrid inheritance where a class is parent of b and c cass act as the herirchical inheritance where d class is 
derived fron B and C class act as multiple inheritance so this is the combination of two type of inheritance..
*/


int main()
{
    D d1;
    
    return 0;
}

/*
Hybrid inheritance??
It is basically the combination of more than one type of inheritance...

*/