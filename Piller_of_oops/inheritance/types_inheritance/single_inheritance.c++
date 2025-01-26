#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Human
{ // This is the example of single level inheritance...

public:
    int age;
    int height;
};

class Male : public Human//Male class is derived form human class...
{

public:
    string name = "Aaryan";
};

int main()
{
    Human naved;
    return 0;
}

/*

What is singlr inheritance ??

Singlr inheritance is basically the process where one class is derived form the another class...


*/