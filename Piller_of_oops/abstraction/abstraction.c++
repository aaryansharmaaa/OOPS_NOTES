#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Car
{
    bool engineStart;

public:
    void start() // These are all the thing that are hidden from the user...
    { 
        engineStart = true;
    }
    void running()
    {
        if (engineStart)
        {
            cout << "Engine is start " << endl;
        }
        else
        {
            cout << "Engine not start" << endl;
        }
    }
};

int main()
{
    Car c;
    c.start();
    c.running(); // These are the thing that are visible to the user...
    return 0;
    // (USER ONLY KNOW THAT CAR IS START OR NOT , BUT NOT THE MACHANISM WORKING IN THE BACKEND)
}
/*

What is abstraction??

Abstraction is one of the key concept of object oriente programing which include inplemantation hiding from the user...(ONLY
ESSENTIAL DETAILS ARE SHARED WITH THE USER NOT ALL THE THINGS...)

example when we send the email (we only know when we send the email it only send not the backend thing that are happening in the background)

*/