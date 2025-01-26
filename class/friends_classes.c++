#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Second; // This is the forward decleration of the class Second because when compiler see class Second it is going line by line
// and it is going to return error because class is decleraed later this is the reason why we did the forward decleration of it..

class First
{
private:
    int x, y;

    friend class Second; // This is how we amke the class friend of each other...
};

class Second
{
public:
    void gerData(First &f)
    {
        cin>>f.x>>f.y;
    }

    void displayData(First &f)
    {
        cout << "The value of x is " << f.x << endl;
        cout << "The value of y is " << f.y << endl;
    }
};

int main()
{
    First f1;
    Second s1;
    s1.gerData(f1);
    s1.displayData(f1);
    return 0;
}

/*

Friend classes are basically the special kind of classe that have access to the private data mamaber of the another class...


*/