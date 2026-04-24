#include<iostream>
using namespace std;
class Shape
{
public:

    virtual float area()
    {
        return 0;
    }
};
class Rectangle:public Shape
{
    float length,width;
public:
    Rectangle(float l,float w)
    {
        length=l;
        width=w;
    }

    float area()
    {
        cout<<"Area of the rectangle is: "<<endl;
        float a=length*width;
        return a;
    }


};
class Circle:public Shape
{
    float radius;
public:
    Circle(float r)
    {
        radius=r;
    }

    float area()
    {
        cout<<"Area of the circle is: "<<endl;
        float a=3.14*radius*radius;
        return a;
    }

};
int main()
{
    Shape *s[2];

    s[0]=new Rectangle(4,5);
    s[1]=new Circle(4);

    cout<<"Dynamic Storage: "<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<s[i]->area()<<endl;
    }

    for(int i=0;i<2;i++)
    {
        delete s[i];
    }

    Rectangle r[2]={Rectangle(3,4),Rectangle(5,6)};
    Circle c[2]={Circle(10),Circle(2)};
    cout<<"Static Storage: "<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<r[i].area()<<endl;
    }

     for(int i=0;i<2;i++)
    {
        cout<<c[i].area()<<endl;
    }


return 0;
}

