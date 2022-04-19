#include <iostream>
#include <graphics.h>
#include <stdio.h>
using namespace std;
class shape
{

protected:

    int color;
public:
    shape()
    {
        color=15;
    }

    shape(int c)
    {
        color=c;
    }

    void setcolorshape(int c)
    {
        color=c;
    }
    int getcolorshape()
    {
        return color;
    }
    virtual void draw()=0;

};

class point
{
    int x;
    int y;
public:
    point()
    {
        x=y=0;
    }
    point(int h)
    {
        x=y=h;
    }
    point(int m,int n)
    {
        x=m;
        y=n;
    }

    void setx(int z)
    {
        x=z;
    }
    int getx()
    {
        return x;
    }
    void sety(int w)
    {
        y=w;
    }
    int gety()
    {
        return y;
    }
};
class Line:public shape
{
    point start;
    point End;
public:
    Line()
    {
    }
    Line(int x1,int y1,int x2,int y2,int c):start(x1,y1),End(x2,y2),shape(c)
    {

    }
    Line(point st,point en,int c)
    {
        start.setx(st.getx());
        start.sety(st.gety());
        End.setx(en.getx());
        End.sety(en.gety());
        color=c;

    }
    void draw()
    {
        setcolor(color);
        line(start.getx(),start.gety(),End.getx(),End.gety());

    }

};
class Circle:public shape
{
    point center;
    int rad;
public:
    Circle()
    {
        rad=0;

    }
    Circle(int x1,int y1,int r,int c):center(x1,y1),shape(c)
    {
        rad=r;
    }
    Circle(point _center,int r,int c)
    {
        center.setx(_center.getx());

        center.sety(_center.gety());
        rad=r;
        color=c;
    }
    void draw()
    {
        setcolor(color);
        circle(center.getx(),center.getx(),rad);
    }

};
class Rect:public shape
{
    point ul;
    point lr;
public:
    Rect()
    {

    }
    Rect(int x1,int y1,int x2,int y2,int c):ul(x1,y1),lr(x2,y2)
    {

    }
    Rect(point _ul,point _lr,int c)
    {
        ul.setx(_ul.getx());
        ul.sety(_ul.gety());
        lr.setx(_lr.getx());
        lr.sety(_lr.getx());
        color=c;
    }
    void draw()
    {
        setcolor(color);
        rectangle(ul.getx(),ul.gety(),lr.getx(),lr.gety());
    }


};


class picture
{
    Line*plines;
    Rect*prects;
    Circle*pcircles;
    int lnum;
    int rnum;
    int cnum;
public:
    picture()
    {
        plines=NULL;
        prects=NULL;
        pcircles=NULL;
        lnum=0;
        rnum=0;
        cnum=0;
    }
    picture(int ln,Line*pl,int rn,Rect*pr,int cn,Circle*pc)
    {
        lnum=ln;
        plines=pl;
        rnum=rn;
        prects=pr;
        cnum=cn;
        pcircles=pc;

    }
    void setlines(int ln,Line*pline)
    {
        lnum=ln;
        plines=pline;
    }
    void setcircles(int cn, Circle*pcircle)
    {
        cnum=cn;
        pcircles=pcircle;
    }
    void setrectangle(int rn,Rect*prect)
    {
        rnum=rn;
        prects=prect;
    }
    void paint()
    {
        for(int i=0; i<lnum; i++)
        {
            plines[i].draw();
        }
        for(int i=0; i<cnum; i++)
        {
            pcircles[i].draw();
        }
        for(int i=0; i<rnum; i++)
        {
            prects[i].draw();
        }

    }

};

int main()
{

     int gd=DETECT,gm;
     initgraph(&gd,&gm,"");

     picture p1;
   Line larr[5]={Line(100,150,200,250,7),Line(100,150,100,150,8),Line(100,150,-900,700,9),Line (100,70,200,150,10),Line (100,70,-700,350,5)};
  Rect rarr[1]={Rect(200,150,100,50,3)};
  Circle carr[1]={Circle(300,350,30,12)};
  p1.setlines(5,larr);
  p1.setcircles(1,carr);
p1.setrectangle(1,rarr);
p1.paint();

 getch();
   closegraph;
    return 0;
    return 0;
}
