#include <iostream>

using namespace std;


class date
{

    int day;
    int month;
    int year;
public:

    void setday(int da);
    int getday();
    void setmonth(int mo);
    int getmonth();
    void setyear(int ye);
    int getyear();
    int subtractDate(date d);
    void printDate ();
    date()
    {
        day=1;
        month=1;
        year=2001;
    }
    date(int x,int y,int z)
    {
        day=x;
        month=y;
        year=z;
    }
    ~ date()
    {
        cout<<"this is destructor"<<endl;
    }

    date operator+(date d1);
    date operator+(int x);
    date operator-(int x);
    date operator=(date d1);
    bool operator==(date d1);
    int operator [] (char ch);
    date operator++(int);
    date operator++();
    operator int();

};



date date::operator++(int)
{
    date d(this->day,this->month,this->year);
    day++;
    month++;
    year++;
    return d;

}
date date::operator++()
{

    ++day;
    ++month;
    ++year;
    return *this;

}




date date::operator+(date d1)
{
    date temp;

    temp.day=this->day+d1.day;
    temp.month=this->month+d1.month;
    temp.year=this->year+d1.year;
    return temp;
}
date date::operator+(int x)
{


    day=this->day+x;
    month=this->month;
    year=this->year;
    return *this;
}
date date::operator-(int x)
{
   day=this->day-x;
    month=this->month;
    year=this->year;
    return *this;
}
bool date ::operator==(date d1)
{
    if(day==d1.day && month==d1.month && year==d1.year)
    {
        return true;
    }
    else
    {
        return false;
    }
}
date date ::operator=(date d1)
{
    date temp;
    temp.day=d1.day;
    temp.month=d1.month;
    temp.year=d1.year;
}
int date ::operator [] (char ch)
{
    if(ch=='d'||ch=='D')
        return day;
    else if(ch=='m'||ch=='M')
        return month;
    else if (ch=='y'||ch=='Y')
        return year;
}
 date ::operator int()
{
    int x=day+(month*30)+(year*365);
}















int main()
{
   /* date c1(2,3,55);
    date c2(4,5,45);
    c1.printDate();
    date c3=c1+c2;
    c3.printDate();
    date c4=c1+3;
    c4.printDate();
    date c5=c1-1;
    c5.printDate();
    date c6=c1;
    c6.printDate();
    if(c1==c2)
        cout<<"this date equal\n";
    else
        cout<<"this date not equal\n";

     cout<<c1['d']<<endl;

    date d11(3,3,2001);
    date d12(1,5,2111);
    d12=d11++;
    d11.printDate();
    d12.printDate();
    date d13(1,1,2000);
    date d14(1,5,2010);
    d14=++d13;
    d14.printDate();*/


 date c1(2,3,55);
 cout<<(int)c1<<endl;






















    /*date d1,d2,d3;
    int num1;
    cout <<"enter day number for the first date \n";
    cin>>num1;
    d1.setday(num1);
    int num2;
    cout <<"enter month number for the first date \n";
    cin>>num2;
    d1.setmonth(num2);
    int num3;
    cout <<"enter year number for the first date \n";
    cin>>num3;
    d1.setyear(num3);

    int num4;
    cout <<"enter day number for the second date \n";
    cin>>num4;
    d2.setday(num4);
    int num5;
    cout <<"enter month number for the second date \n";
    cin>>num5;
    d2.setmonth(num5);
    int num6;
    cout <<"enter year number for the second date \n";
    cin>>num6;
    d1.setyear(num6);

    cout<<d1.subtractDate(d2)<<endl;




    int num11;
    cout <<"enter day number for the first date \n";
    cin>>num11;
    d3.setday(num1);
    int num22;
    cout <<"enter month number for the first date \n";
    cin>>num22;
    d3.setmonth(num2);
    int num33;
    cout <<"enter year number for the first date \n";
    cin>>num33;
    d3.setyear(num33);

    d3.printDate();*/



















    return 0;
}

void date:: setday(int da)
{
    day=da;
}
int date:: getday()
{
    return day;
}
void date:: setmonth(int mo)
{
    month= mo;
}
int date:: getmonth()
{
    return month;
}
void date:: setyear(int ye)
{
    year=ye;
}
int date:: getyear()
{
    return year;
}
int date::subtractDate(date d)
{
    date temp;
    temp. day=this-> day-d. day;
    temp.month=(this->month-d.month);
    temp. year=this-> year-d.year;
    int s= temp. day+(temp.month)*30+(temp. year)*365;
    return s;

}
void date::printDate()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
