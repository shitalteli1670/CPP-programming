#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()  // 1000         Defination
        {   cout<<"Base Fun\n"; }
        void Gun()  // 2000         Defination
        {   cout<<"Base Gun\n"; }
        void Sun()  // 3000         Defination
        {   cout<<"Base Sun\n"; }
};

class Derived : public Base
{
    public:
        int X,Y;
        void Gun()  // 4000         ReDefination
        {   cout<<"Derived Gun\n";  }
        void Sun()  // 5000         ReDefination
        {   cout<<"Derived Sun\n";  }
        void Run()  // 6000         Defination
        {   cout<<"Derived Run\n";  }
};

int main()
{
    Base bobj;
    Derived dobj;

    bobj.Fun();     // Base Fun
    bobj.Gun();     // Base Gun
    bobj.Sun();     // Base Sun

    dobj.Fun();     // Base Fun
    dobj.Gun();     // Derived Gun
    dobj.Sun();     // Derived Sun
    dobj.Run();     // Derived Run

    return 0;
}