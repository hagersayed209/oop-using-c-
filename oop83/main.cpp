#include <iostream>
#include <graphics.h>
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
   shape**pshapes;
   int shapesize;
public:
    picture()
    {
       pshapes=NULL;
       shapesize=0;
    }
    picture(int shnum,shape**_pshapes)
    {
        pshapes=_pshapes;
       shapesize=shnum;
    }
    void setshapes(int shnum,shape**_pshapes)
    {
          pshapes=_pshapes;
       shapesize=shnum;
    }

    void paint()
    {   shape**sh=new shape *[shapesize]
        for(int i=0; i<shapesize; i++)
        {
          sh[i]=new shape[i+1];
          for(int j=0; j<i+1; j++)
          {
              cin>>p[i][j];
          }
        }

    }

};

int main()
{

     int gd=DETECT,gm;
     initgraph(&gd,&gm,"");


int shapesize;
    cout<<"Enter number of shapes:\n";
    cin>>shapesize;

    cout<<"Enter elements:\n";
    int **p = new int *[shapesize];

    for(int i=0;i<shapesize;i++){
        p[i] = new int[i+1];
        for(int j=0;j<(i+1);j++){
            cin>>p[i][j];
        }
    }


    for(int i=0;i<shapesize;i++){
        for(int j=0;j<(i+1);j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<shapesize;i++){
        delete []p[i];
    }
    delete []p;


  /* Line*larr=new Line(100,150,200,250,7);
  Rect*rarr=new Rect(200,150,100,50,3);
  Circle*carr=new Circle(300,350,30,12);
  Circle*cptr=carr;
  Rect*rptr=rarr;
  Line*lptr=larr;
  shape*sh[3];
  sh[0]=rptr;
  sh[1]=cptr;
  sh[2]=lptr;
  picture p1;
  p1.setshapes(3,sh);

p1.paint();*/

 getch();
   closegraph;
    return 0;
    return 0;
}

