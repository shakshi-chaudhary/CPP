#include <iostream>
using namespace std;

string logs[50];
int logIndex = 0;

void addLog(string msg)
{
    logs[logIndex++] = msg;
}

class BankAccount
 {
    double balance;

public:
    BankAccount(double b)
    {
        balance = b;
    }

    void deposit(double amount)
    {
        addLog("Entered deposit()");
        if (amount <= 0)
        {
            throw "Invalid deposit amount!";
        }
        balance += amount;
        addLog("Deposit successful");
        addLog("Exiting deposit()");
    }

    void withdraw(double amount)
    {
        addLog("Entered withdraw()");
        if (amount > balance)
        {
            throw "Insufficient balance!";
        }
        balance -= amount;
        addLog("Withdrawal successful");
        addLog("Exiting withdraw()");
    }

    double getBalance()
    {
        return balance;
    }
};

void performTransaction(BankAccount &acc) {
    addLog("Entered performTransaction()");
    acc.withdraw(5000);
    addLog("Exiting performTransaction()");
}

void startProcess(BankAccount &acc)
{
    addLog("Entered startProcess()");
    performTransaction(acc);
    addLog("Exiting startProcess()");
}

int main()
{
    BankAccount acc(6000);

    try {
        addLog("Program started");
        startProcess(acc);
        addLog("Program ended normally");
    }
    catch (const char* msg)
    {
        addLog("Exception caught in main()");
        cout << "Exception: " << msg << endl;
    }


    cout << " Transaction Logs ";
    for (int i = 0; i < logIndex; i++) {
        cout << logs[i] << endl;
    }

    return 0;
}
