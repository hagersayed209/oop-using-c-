#include <iostream>

using namespace std;
class Stack
{
    int tos;
    int Size
int ptr;


public:
Stack()
{
    tos=0;
    cout<<"this is instructor\n";
}
Stack(int s)
{
    tos=0;
    Size=s;
    ptr=new int[Size];
    cout<<"this is parametrized"
}

~Stack()
{
    delete[]ptr;
    cout<<"this is destructor\n";
}
void push(int val)
{
    if(tos<Size)
    {
        arr[tos]=val;
        tos++;
    }

}
int pup()
{
    if(tos>0)

    {
        tos--;
        return arr[tos];
    }
    return -1;

}};

int main()
{
 Stack s1;



    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout<<s1.pop()<<endl;
     cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
       cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
         cout<<s1.pop()<<endl
    return 0;
}
