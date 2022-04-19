#include <iostream>
#include <cstring>
using namespace std;

class calculator
{
public:
    int sum (int x, int y)
    {
        int z=x+y;
        return z;
    }
    float sum (float x , float y)
    {
        float z=x+y;
        return z;
    }
    int sum (int x, int y, int z)
    {
        int s=x+y+z;
        return s;
    }
    int sum (int arr[],int Size)
    {
        int sm;
        for(int i=0; i<Size; i++)
        {
            sm=sm+arr[i];
        }
        return sm;
    }
    string sum (string str1, string str2)

    {
        cout<<str1<<endl;
          cout<<str2<<endl;
        string str3=str1+str2;
        return str3;

    }
    char* sum (char* str1, char* str2)
    {
         return strcat(str1,str2);
    }




};

int main()
{

    calculator s1;
    int x=s1.sum(2,3);
    cout<<x<<endl;
    float h=s1.sum(2.5f,3.2f);
    cout<<h<<endl;
    int y=s1.sum(2,3,4);
    cout<<y<<endl;
    cout<<"enter size of array\n";
    int s;
    cin>>s;
    int arr[s];
    cout<<"enter elements of array\n";
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }
    int r=s1.sum(arr,s);
    cout<<r<<endl;
    string first_na="hager";
    string second_na="sayed";
    string name=s1.sum(first_na,second_na);
    cout<<name<<endl;
      char*str1=new char[10];
    cout<<"enter the first word\n";
    cin>>str1;

  char*str2=new char[10];
     cout<<"enter the second word\n";
    cin>>str2;
    char *c=s1.sum(str1,str2);
   cout<<c;

}
