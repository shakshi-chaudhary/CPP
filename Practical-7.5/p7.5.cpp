include <iostream>
using namespace std;

class Grading
{
protected:
    float marks;

public:
    void setMarks(float m)
    {
        marks=m;
    }

    virtual void computeGrade()=0;
};

class Undergraduate : public Grading
{
public:
    void computeGrade()
    {
        if(marks>=75)
            cout<<"Grade: A"<<endl;
        else if(marks>=60)
            cout<<"Grade: B"<<endl;
        else if(marks>=50)
            cout<<"Grade: C"<<endl;
        else
            cout<<"Grade: Fail"<<endl;
    }
};

class Postgraduate : public Grading
{
public:
    void computeGrade()
    {
        if(marks>=80)
            cout<<"Grade: A"<<endl;
        else if(marks>=65)
            cout<<"Grade: B"<<endl;
        else if(marks>=55)
            cout<<"Grade: C"<<endl;
        else
            cout<<"Grade: Fail"<<endl;
    }
};

int main()
{
    Grading* g;

    Undergraduate u1;
    Postgraduate p1;

    float m;

    cout<<"Enter marks for Undergraduate: ";
    cin>>m;
    g=&u1;
    g->setMarks(m);
    g->computeGrade();

    cout<<"Enter marks for Postgraduate: ";
    cin>>m;
    g=&p1;
    g->setMarks(m);
    g->computeGrade();

    Undergraduate u[2];
    Postgraduate p[2];

    cout<<"Static Records:"<<endl;
    cout<<"undergraduate:"<<endl;
    u[0].setMarks(70);
    u[0].computeGrade();
   cout<<"postgraduate:"<<endl;
    p[0].setMarks(85);
    p[0].computeGrade();

    return 0;
}
