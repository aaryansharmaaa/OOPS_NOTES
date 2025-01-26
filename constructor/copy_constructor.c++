#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Hero
{
private:
    char health;
    int level;

public:
    string name;
    char gender;

    Hero()
    {
        cout << "This is the defalut constructor" << endl;
    }

    Hero(char health, int level)
    {
        cout << this << endl;
        this->health = health;
        this->level = level;
    }

    Hero(Hero & temp){ //This is how we creata our own copy constructor...
        this->health=temp.health;
        this->level=temp.level;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int n)
    {
        health = n;
    }

    void print(){
        cout<<"Health "<<this->health<<endl;
        cout<<"Level "<<this->level<<endl;
    }
};

int main()
{
    Hero suresh('a',70);
    suresh.print();
    cout<<endl;

    Hero a('a',40);
    Hero b('b',50);

    a=b;//Copy assignment operator..... The value of b will copy inside a....

    Hero r(suresh);//Copy constructor is called here r have the copy of all the property of suresh...
    

    r.print();

    return 0;
}

//What is copy constructor??

//Copy constructor is basically the type of constructor that creata the copy of another object ...