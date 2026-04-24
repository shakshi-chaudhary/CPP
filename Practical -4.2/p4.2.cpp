#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }

    Point& move(int dx,int dy)
    {
        x += dx;
        y += dy;
        return *this;
    }

    Point& setX(int a)
    {
        x = a;
        return *this;
    }

    Point& setY(int b)
    {
        y = b;
        return *this;
    }

    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

    void updatePoint(Point* p,int dx,int dy)
    {
    p->move(dx,dy);
    }
};
int main()
{
    Point p;
    cout<<"Initial value: ";
    p.setX(0).setY(0).display();
    cout<<"Using this pointer: ";
    p.move(2, 3).move(-1, 4).display();
    cout<<"Updated value: ";
    p.updatePoint(&p,5,-2);
    p.display();

    return 0;
}
