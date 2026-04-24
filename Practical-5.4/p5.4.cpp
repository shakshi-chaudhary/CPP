#include <iostream>
#include <iomanip>
using namespace std;


ostream& currency(ostream& output)
{
    output<<"Rs.";
    return output;
}

int main()
{
    string name[]={"Asha","Ravi","Neha"};
    float marks[]={89.456,76.234,91.678};
    float fees[]={25000,30000,28000};

    cout<<setfill(' ');

    cout <<setw(10)<<"Name"
         <<setw(15)<<"Marks"
         <<setw(15)<<"Fees"<<endl;

    cout<<setfill('-')<<setw(40)<<"-"<<endl;

    for(int i=0;i<3;i++)
        {
        cout<<setfill(' ');
        cout<<setw(10)<<name[i];

        cout<<setw(15)<<fixed<<setprecision(2)<<marks[i];

        cout<<setw(10)<<currency<<fees[i]<<endl;
    }

    return 0;
}
