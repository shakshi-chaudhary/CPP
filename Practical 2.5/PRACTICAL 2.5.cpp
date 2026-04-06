#include <iostream>
#include <cmath>
using namespace std;

class Loan {
private:
    int id, tenure;
    string name;
    float amount, rate;

public:
    Loan() {
        id = 0;
        name = "Test";
        amount = 0;
        rate = 0;
        tenure = 0;
    }

    Loan(int i, string n, float a, float r, int t) {
        id = i;
        name = n;
        amount = a;
        rate = r;
        tenure = t;
    }

    float calculateEMI() {
        float r = rate / (12 * 100); // monthly interest
        return (amount * r * pow(1 + r, tenure)) /
               (pow(1 + r, tenure) - 1);
    }

    void display() {
        cout << "Loan ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Loan Amount: " << amount << endl;
        cout << "Interest Rate: " << rate << "%" << endl;
        cout << "Tenure: " << tenure << " months" << endl;
        cout << "EMI: " << calculateEMI() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of loans: ";
    cin >> n;

    Loan l[n];

    cout << "\nDefault Loan:\n";
    l[0].display();

    for (int i = 1; i < n; i++) {
        int id, tenure;
        string name;
        float amount, rate;

        cout << "\nEnter Loan ID, Name, Amount, Rate, Tenure: ";
        cin >> id >> name >> amount >> rate >> tenure;

        l[i] = Loan(id, name, amount, rate, tenure);
    }

    cout << "\n--- Loan Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nLoan " << i + 1 << endl;
        l[i].display();
    }
 cout<<"Shakshi Chaudhary_25CE014\n";
    return 0;
}
