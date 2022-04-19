#include <iostream>

#include <iostream>

using namespace std;

class Base//Parent Class
{

public:
    int x;


    Base()
    {
        x=0;
    }

    Base(int L)
    {
        x=L;
    }



    void MyMethod()
    {
        cout<<"Base Class"<<endl;
    }


    ~Base()
    {
        cout<<"Base Destructor"<<endl;
    }

};

class Drived:public Base
{

public:
    int y;

    Drived()//:Base()
    {



    }
    Drived(int L,int m):Base(L)
    {
        y=m;

    }


    ~Drived()
    {
        cout<<"Drived Destructor"<<endl;
    }
    void MyMethod()//overriding
    {
        cout<<"Drived Class"<<endl;
    }

};
int main()
{
     Drived*d;
   d=new Drived(3,4);
   Base*b;
   b=d;
   cout<<b->x<<endl;
   b->MyMethod();

    return 0;
}
