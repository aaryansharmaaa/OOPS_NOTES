#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void fun()
{
    static int val = 0;//It is only going to create once time... and the value is incrimented...
    cout << val << endl;
    val++;
}

int main()
{
    fun(); // val=0;
    fun(); //val=1;
    fun();//val=2;
    fun();// val=3;

    //Without static the value of val is 0 every time..

    return 0;
}

/*
static variable..

static variable are basically the kind of variable that are initlize only once .....

static object, variable are going to staty inside the program for the end of program... not like other normal object as they move out of scope they got deleted..

*/