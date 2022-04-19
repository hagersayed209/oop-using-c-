#include <iostream>
#include <graphics.h>

using namespace std;
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
class Line
{
    point start;
    point End;
public:
    Line()
    {
    }
    Line(int x1,int y1,int x2,int y2):start(x1,y1),End(x2,y2)
    {

    }
    Line(point st,point en)
    {
        start.setx(st.getx());
        start.sety(st.gety());
        End.setx(en.getx());
        End.sety(en.gety());
    }
    void draw()
    {
        setcolor(GREEN);
        line(start.getx(),start.gety(),End.getx(),End.gety());

    }

};
class Circle
{
    point center;
    int rad;
public:
    Circle()
    {
        rad=0;

    }
    Circle(int x1,int y1,int r):center(x1,y1)
    {
        rad=r;
    }
    Circle(point _center,int r)
    {
        center.setx(_center.getx());

        center.sety(_center.gety());
        rad=r;
    }
    void draw()
    {
        setcolor(RED);
        circle(center.getx(),center.getx(),rad);
    }

};
class Rect
{
    point ul;
    point lr;
public:
    Rect()
    {

    }
    Rect(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2)
    {

    }
    Rect(point _ul,point _lr)
    {
        ul.setx(_ul.getx());
        ul.sety(_ul.gety());
        lr.setx(_lr.getx());
        lr.sety(_lr.getx());
    }
    void draw()
    {
        setcolor(GREEN);
        rectangle(ul.getx(),ul.gety(),lr.getx(),lr.gety());
    }


};

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");


   point s(100,50);
   point e(100,150);
   Line ll(s,e);
   ll.draw();

Line l1(100,150,200,250);
l1.draw();
Line l2(100,150,-900,700);
l2.draw();
Line l3(100,70,200,150);
l3.draw();
Line l4(100,70,-700,350);
l4.draw();
Circle c1(0,0,30);
c1.draw();

   getch();
   closegraph;
    return 0;
}
