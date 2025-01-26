#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Simple
{
private:
    int height;

public:
    Simple(int h)
    {
        this->height = h;
    }

    friend void getHeight(Simple h); // This is how the private function aer amde in c++;
};

void getHeight(Simple h)
{ // This ishow we call the private function there...
    cout << "The value of the private memebr is " << h.height << endl;
}

int main()
{
    Simple s1(45);
    getHeight(s1);
    return 0;
}

/*
What are friend function??

Friend function are the special kind of function that are not the member of the class but
 have the permission to access the private data member of the class..

*/