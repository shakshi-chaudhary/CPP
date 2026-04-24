#include <iostream>
using namespace std;

class Account
{
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal = 0.0)
    {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account
{
    double interestRate;
public:
    SavingsAccount(int accNo, double bal, double rate): Account(accNo, bal), interestRate(rate) {}

    void applyInterest()
    {
        double interest = balance * interestRate / 100;
        deposit(interest);
        cout << "Interest applied: " << interest << endl;
    }
};

class CurrentAccount : public Account {
    double overdraftLimit;
public:
    CurrentAccount(int accNo, double bal, double limit): Account(accNo, bal), overdraftLimit(limit) {}

    void withdraw(double amount) override
     {
        if (balance + overdraftLimit >= amount)
        {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
        else
        {
            cout << "Exceeds overdraft limit!" << endl;
        }
    }
};

int main() {
    SavingsAccount sa(1001, 5000, 5);
    sa.deposit(1000);
    sa.withdraw(2000);
    sa.applyInterest();
    sa.displayDetails();

    cout << "-----------------" << endl;

    CurrentAccount ca(2001, 3000, 1000);
    ca.deposit(500);
    ca.withdraw(3500);
    ca.withdraw(2000);
    ca.displayDetails();

    return 0;
}
