#include <iostream>

using namespace std;
template <typename T>
class Stack
{
private:
    int tos;
   T* ptr;
    int Size;

    static int Counter;
public:
    static int getCounter();


    Stack()
    {
        tos=0;
        Size=10;
        ptr=new T[Size];
        cout<<"default Constructor....."<<endl;
        Counter++;
    }

    Stack(int s)
    {
        tos=0;
        Size=s;
        ptr=new T[Size];
        cout<<"Parametrized Constructor....."<<endl;
        Counter++;
    }




    ~Stack();



    void push(T val)
    {
        if(tos<Size)
        {
            ptr[tos]=val;
            tos++;

        }
    }



   T pop()
    {
        T returnval;
        if(tos>0)
        {

            tos--;
            return ptr[tos];
        }
        return returnval;

    }



};
template<typename T>
int Stack <T>::getCounter(){

        return Counter;

    }

template<typename T>
Stack <T>::~Stack(){

        delete[] ptr;
        cout<<"destructor...."<<endl;

    }
//2-intializaion
template<typename T>
int  Stack<T>::Counter=0;




int main()
{


    int num;
    cout<<"Enter size of stack:"<<endl;
    cin>>num;
    Stack <int >s1(num);
    for(int i=0; i<num; i++)
    {
        cout<<"Enter Value :"<<endl;
        int n;
        cin>>n;
        s1.push(n);
    }
    for(int i=0; i<num; i++)
    {
        cout<<s1.pop()<<endl;
    }
cout<<"*************************\n";
     int num2;
    cout<<"Enter size of stack:"<<endl;
    cin>>num2;
    Stack <float >s2(num2);
    for(int i=0; i<num2; i++)
    {
        cout<<"Enter Value :"<<endl;
        float n1;
        cin>>n1;
        s2.push(n1);
    }
    for(int i=0; i<num2; i++)
    {
        cout<<s2.pop()<<endl;
    }
    cout<<"*************************\n";
     int num3;
    cout<<"Enter size of stack:"<<endl;
    cin>>num3;
    Stack <string >s3(num3);
    for(int i=0; i<num3; i++)
    {
        cout<<"Enter  the word :"<<endl;
        string w;
        cin>>w;
        s3.push(w);
    }
    for(int i=0; i<num3; i++)
    {
        cout<<s3.pop()<<endl;
    }


    return 0;
}
