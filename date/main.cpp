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


};


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


















int main()
{
date d1,d2,d3;
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

d3.printDate();



















    return 0;
}
