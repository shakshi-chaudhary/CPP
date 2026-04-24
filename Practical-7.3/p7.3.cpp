#include<iostream>
using namespace std;
class Fahrenheit;
class Celsius
{

public:
    float temp;
    Celsius()
    {

    }
    Celsius(float a)
    {
        temp=a;
    }
    operator Fahrenheit();

    bool operator==(Celsius c)
     {
        return temp==c.temp;
     }
};
class Fahrenheit
{

public:
    float temp;
    Fahrenheit(float b=0)
    {
        temp=b;
    }

     operator Celsius()
     {
        return Celsius((temp - 32) * 5 / 9);
    }


    bool operator==(Fahrenheit f) {
        return temp==f.temp;
    }
};

Celsius::operator Fahrenheit()
{
    return Fahrenheit((temp* 9/5) + 32);
}
int main()
{
    Celsius c1(37);
    Fahrenheit f1;
     f1=c1;

    cout<<"Celsius: "<<c1.temp<<endl;
    cout<<"Converted to Fahrenheit: "<<f1.temp<<endl;

    Celsius c2;
    c2=f1;

    cout<<"Back to Celsius: "<<c2.temp<<endl;
    if (c1==c2)
        cout<<"Temperatures are equal"<<endl;
    else
        cout<<"Temperatures are NOT equal"<<endl;

    return 0;
}



