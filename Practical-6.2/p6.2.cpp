#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    Person(string n,int a)
    {
        name=n;
        age=a;
    }
    void displayp()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: :"<<age<<endl;
    }
};
class Employee:public Person
{
protected:
    int empid;
public:
    Employee(string n,int a,int id):Person(n,a)
    {
        empid=id;
    }
    void displaye()
    {
        displayp();
        cout<<"Employee id: "<<empid<<endl;
    }
    int getid()
    {
        return empid;
    }
};
class Manager:public Employee
{
private:
    string department;
public:
    Manager(string n,int a,int id,string dept):Employee(n,a,id)
    {
        department=dept;
    }
    void displaym()
    {
        displaye();
        cout<<"Department: "<<department<<endl;
    }
};

void searchm(Manager m[],int size,int id)
{
    for(int i=0;i<size;i++)
    {
        if(m[i].getid()==id)
        {
            cout<<"Manager found: ";
            m[i].displaym();
            return;
        }
    }
    cout<<"Manager not found!"<<endl;
}
int main()
{
   Manager m[2]={{"Raj",35,101,"HR"},{"Rahul",40,102,"Finance"}};
   cout<<"All managers: "<<endl;
   for(int i=0;i<2;i++)
   {
       m[i].displaym();
       cout<<endl;
   }

   int sid;
   cout<<"Enter Employee ID to search: ";
   cin>>sid;

   searchm(m,2,sid);
return 0;
}
