#include<iostream>
using namespace std;

int add(int,int);
float add(float,float);
float add(int,float);

int main()
{
    cout<<"Add: "<<endl;
    cout<<add(3,4)<<endl;
    cout<<add(3.5f,4.4f)<<endl;
    cout<<add(4,5.5f)<<endl;
return 0;
}

int add(int a,int b)
{
return a+b;
}

float add(float x,float y)
{
    return x+y;
}

float add(int m,float n)
{
    return m+n;
}
