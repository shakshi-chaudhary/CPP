#include <iostream>
using namespace std;

class Account {
private:
    string name;
    int id;
    float balance;

public:
    void create(string n, int i, float b = 0) {
        name = n;
        id = i;
        balance = b;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
        }
    }

    void display()
     {
        cout << "Name: " << name << endl;
        cout << "Account ID: " << id << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    Account a[n];

    for (int i = 0; i < n; i++) {
        string name;
        int id;
        float bal;

        cout << "\nEnter Name, ID, Initial Balance: ";
        cin >> name >> id >> bal;

        a[i].create(name, id, bal);
    }

    for (int i = 0; i < n; i++) {
        float dep, wit;

        cout << "\nAccount " << i + 1 << endl;

        cout << "Enter deposit amount: ";
        cin >> dep;
        a[i].deposit(dep);

        cout << "Enter withdrawal amount: ";
        cin >> wit;
        a[i].withdraw(wit);
    }

    cout << "\n--- Account Summary ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nAccount " << i + 1 << endl;
        a[i].display();
    }

     cout<<"Shakshi Chaudhary_25CE014\n";
    return 0;
}
