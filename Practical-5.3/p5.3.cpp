#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int choice;
    string name,searchName;
    int qty;
    float price;

    do
        {
        cout<<"1. Add Item"<<endl;
        cout<<"2. View All Items"<<endl;
        cout<<"3. Search Item"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {

        case 1:
            {
            ofstream fout("inventory.txt",ios::app);

            cout<<"Enter item name: ";
            cin>>name;
            cout<<"Enter quantity: ";
            cin>>qty;
            cout<<"Enter price: ";
            cin>>price;

            fout<<name<<" "<<qty<<" "<<price<<endl;
            fout.close();

            cout<<"Item added successfully! "<<endl;
            break;
        }

        case 2:
            {
            ifstream fin("inventory.txt");

            cout<<"Items List: "<<endl;
            while(fin>>name>>qty>>price)
            {
                cout<<"Name:"<<name<<endl;
                cout<<"Qty:"<<qty<<endl;
                cout<<"Price: "<<price<<endl;
            }
            fin.close();
            break;
        }

        case 3:
            {
            ifstream fin("inventory.txt");
            cout<<"Enter item name to search: ";
            cin>>searchName;

            bool found=false;

            while (fin>>name>>qty>>price)
                {
                if(name==searchName)
                {
                    cout<<"Found "<<endl;
                    cout<<"Name: "<<name<<endl;
                    cout<<"Qty: "<<qty<<endl;
                    cout<<"Price: "<<price<<endl;
                    found=true;
                }
            }

            if(!found)
                cout<<"Item not found!"<<endl;

            fin.close();
            break;
        }

        }

    } while(choice != 4);

    return 0;
}
