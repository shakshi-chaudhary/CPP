#include<iostream>
using namespace std;

class Fuel
{
public:
    string type;

    Fuel(string t)
    {
        type=t;
    }
};
class Brand
{
public:
    string name;

    Brand(string n)
    {
        name=n;
    }
};
class Car:public Fuel,public Brand
{
public:

    Car(string t,string n):Fuel(t),Brand(n)
    {

    }
    void show()
    {
        cout<<"Fuel type: "<<type<<endl;
        cout<<"Brand name: "<<name<<endl;
    }
};
int main()
{
    Car c[2]={{"petrol","toyoto"},{"diesiel","hyundai"}};

    for(int i=0;i<2;i++)
    {
        cout<<i+1<<endl;
        c[i].show();
    }
}
