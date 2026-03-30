#include<iostream>
using namespace std;
class wallet
{
private:
    int id;
    string name;
    float balance;
public:
    void set_data();
    void load_wallet(float);
    void transfer_money(wallet&,float);
    void display_wallet();

};

void wallet::set_data()
{
    cout<<"Enter  wallet id: ";
    cin>>id;
    cout<<"Enter user name:";
    cin>>name;
    cout<<"Enter balance: ";
    cin>>balance;
}

void wallet::load_wallet(float money)
{
    if(money>0)
    {
        balance+=money;
    }
    else
    {
        cout<<"Please enter valid amount"<<endl;
    }
}
void wallet::transfer_money(wallet& reciver,float money)
{
    if(money>=balance)
    {
        cout<<"Insufficient balance!"<<endl;
    }
    else
    {
        balance-=money;
        reciver.balance+=money;
    }


}

void wallet::display_wallet()
{
    cout<<"wallet id:  "<<id<<endl;
    cout<<"User name:  "<<name<<endl;
    cout<<"Current balance:  "<<balance<<endl;
}

int main()
{
    wallet w1,w2;
    float money,MONEY;
    int ch,no,N;

    w1.set_data();
    w2.set_data();
n:
    cout<<" 1.load wallet \n 2.transfer money in another wallet \n 3.Display my details \n 4.Exit \n";
    cin>>ch;

    switch(ch)
    {
    case 1:
         cout<<"Enter money you want to load"<<endl;
         cin>>money;
         cout<<"Enter wallet no. you want to load"<<endl;
         cin>>no;
         if(no==1)
         {
             w1.load_wallet(money);
         }
         else if(no==2)
         {
             w2.load_wallet(money);
         }
         else
         {
             cout<<"Please enter valid no"<<endl;
         }

        goto n;

        case 2:
        cout<<"Enter the amount of money you want to transfer:"<<endl;
        cin>>money;
        cout<<"Enter 1 or 2 in order to transfer money from which account:"<<endl;
        cin>>N;
        if(N==1)
         {
            w1.transfer_money(w2,money);
         }
         else if(N==2)
         {
            w2.transfer_money(w1,money);
         }
         else
         {
             cout<<"Please enter valid no"<<endl;
         }

        goto n;

    case 3:
        cout<<"Details of the wallets:"<<endl;
        w1.display_wallet();
        w2.display_wallet();
        goto n;

    case 4:
        cout<<"Thank you!"<<endl;
        break;

    default:
        cout<<"Error: Please choose valid option"<<endl;
        goto n;
    }
    cout<<"Shakshi Chaudhary_25CE014\n";
}
