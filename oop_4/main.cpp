#include <iostream>

using namespace std;

class Complex
{
    float real;
    float img;
public:

    void setreal(float r);
    float getreal();
    void setimg(float i);
    float getimg();
    Complex addcomplex(Complex c);
    Complex subcomplex(Complex c);
    void printcomplex();
    Complex operator+(Complex c);

};
Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.real=this->real+c.real;
    temp.img=this->img+c.img;
    return temp;
}




















int main()
{
    Complex c1;
    c1.(2,4);
    Complex c2(3,5);
    Complex c3;
    c3=c1+c2;
    c3.printcomplex();








    /* float num1;
     Complex ca,cb,cc,cd;
     cout<<"enter real number for first number\n";
     cin>>num1;
     ca.setreal(num1);
     float num2;
     cout<<"enter img number for first number\n";
     cin>>num2;
     ca.setimg(num2);
     float num3;
     cout<<"enter real number for second number\n";
     cin>>num3;
     cb.setreal(num3);
     float num4;
     cout<<"enter img number for second number\n";
     cin>>num4;
     cb.setimg(num4);
     cc=ca.addcomplex(cb);
     cc.printcomplex();
     cd=ca.subcomplex (cb);
     cd.printcomplex();*/




    return 0;
}
void Complex:: setreal(float r)
{
    real=r;
}
float Complex:: getreal()
{
    return real;
}
void Complex::setimg(float i)
{
    img=i;
}
float Complex::getimg()
{
    return img;
}
Complex Complex::addcomplex(Complex c)
{
    Complex temp;
    temp.real=this->real+c.real;
    temp.img=this->img+c.img;
    return temp;
}
Complex Complex::subcomplex(Complex c)
{
    Complex temp;
    temp.real=this->real-c.real;
    temp.img=this->img-c.img;
    return temp;
}
void Complex:: printcomplex()
{
    if(img>0)
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    else if(img<0)
    {
        cout<<real<<img<<"i"<<endl;
    }

    else if(real==0)
    {
        cout<<img<<"i"<<endl;
    }
    else if(real==0 && img==0)
    {
        cout<<"0"<<endl;
    }
    else if(real==0 && img<0)
    {
        cout<<img<<"i"<<endl;
    }

    else
    {
        cout<<real<<endl;
    }

}





