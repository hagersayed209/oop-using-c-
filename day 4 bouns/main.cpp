#include <iostream>

using namespace std;
class Complex
{
    float real;
    float img;
public:
    Complex()
    {
        real=1;
        img=2;
    }

    void setreal(float r);
    float getreal();
    void setimg(float i);
    float getimg();
    Complex addcomplex(Complex c);
    Complex subcomplex(Complex c);
    void printcomplex();
    Complex operator+(Complex c1);
    Complex operator+=(Complex c1);
    Complex operator-=(Complex c1);
    Complex operator-(Complex c1);
    Complex operator+(int x);
    Complex operator-(int x);
    Complex operator=( Complex);
    bool operator==( Complex);
    float operator [] (char ch);
    Complex operator++(int);
    Complex operator++();
    Complex operator--(int);
    Complex operator--();
    Complex(float x)
    {
        real=img=x;
    }

    Complex(float x,float y)
    {
        real=x;
        img=y;

    }
    ~ Complex()
    {
        cout<<"this is destructor\n";
    }

};


Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.real=this->real+c.real;
    temp.img=this->img+c.img;
    return temp;
}
Complex Complex::operator-(Complex c)
{
    Complex temp;
    temp.real=this->real-c.real;
    temp.img=this->img-c.img;
    return temp;
}
Complex  Complex::operator+(int x)
{

    this->real=real+x;
    this->img=img;
    return*this;
}
Complex  Complex::operator-(int x)
{
    Complex temp;
    this->real=real-x;
    this->img=img;
    return *this;
}
Complex  Complex::operator=( Complex c)
{
    this->real=c.real;
    this->img=c.img;
    return *this;

}
float Complex::operator [] (char ch)
{
    if(ch=='r'||ch=='R')
        return real;
    else if(ch=='i'||ch=='I')
        return img;
    else
        return 0;

}
bool  Complex::operator==( Complex c)
{
    if(real==c.real && img==c.img)
        return true;
    else
        return false;

}

Complex  Complex::operator++(int)
{
    this->real++;
    this->img++;
    return*this;

}
Complex Complex::operator++()
{
    ++this->real;
    ++this->img;
    return*this;

}

Complex  Complex::operator--(int)
{
    this->real--;
    this->img--;
    return*this;

}
Complex  Complex::operator--()
{
    --this->real;
    --this->img;
    return*this;
}
Complex Complex::operator+=(Complex c)
{
    real+=c.real;
    img+=c.img;
    return*this;
}
Complex Complex::operator-=(Complex c)
{
    real-=c.real;
    img-=c.img;
    return*this;
}



int main()
{
    Complex c1(4,5);
    Complex c2(2,3);

    Complex c3;
    c3=c1+c2;
    c3.printcomplex();
    c3=c1-c2;
    c3.printcomplex();
   c3=c1+3;
    c3.printcomplex();
    c3=c1-2;
    c3.printcomplex();
   c3=c1;
    c3.printcomplex();
    if(c3==c1)
    {
        cout<<"it's correct\n";
    }
    else
    {
        cout<<"it's not correct\n";
    }
    c1+=c2;
    c1.printcomplex();
    c1-=c2;
    c1.printcomplex();
    cout<<c1['r']<<endl;
    cout<<c2['r']<<endl;











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

