#include <iostream>

using namespace std;
class Base
{
 int y;
    int x;
protected:
    int r;
public:


    Base()
    {
        x=y=0;
    }
    Base(int s)
    {
        x=y=s;
    }
    Base(int s,int c)
    {
        x=s;
        y=c;
    }
    ~Base()
    {
        cout<<"this is destructor\n";

    }
    void setr(int k)
    {
        r=k;
    }
    int getr()
    {
        return r;}
        void sety(int r)
        {
            y=r;
        }
        int gety()
        {
            return y;
        }
        void setx(int t)
        {
            x=t;
        }
        int getx()
        {
            return x;
        }
       virtual int sum()
        {
            return getx()+gety() ;
        }
    };
    class Drived:public Base
    {
        int z;
    public:
        void setz(int i)
        {
            z=i;
        }
        int getz()
        {
            return z;
        }
        Drived()
        {
            z=0;
        }
        Drived(int l)
        {
            z=l;
        }
        Drived(int q,int w,int e ):Base(q,w)
        {

            z=e;
        }
        int sum()
        {
            return getx ()+gety()+z;
        }

        ~Drived()
        {
            cout<<"this is destructor\n";
        }

    };
















    int main()
    {



 Drived*d;
   d=new Drived(3,4,5);
   Base*b;
   b=d;

   cout<<b->sum();












        /*  Base b(2,3);
        cout<<b.sum()<<endl;
        Drived d(2,3,4);
        cout<<d.sum()<<endl;*/

        return 0;
    }
