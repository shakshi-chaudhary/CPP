#include <iostream>
using namespace std;

class Item {
private:
    int id, qty;
    string name;
    float price;

public:
    Item() {
        id = 0;
        name = "Test";
        price = 0;
        qty = 0;
    }

    void setData(int i, string n, float p, int q) {
        id = i;
        name = n;
        price = p;
        qty = q;
    }

    void addStock(int q)
    {
        qty += q;
    }

    void sell(int q) {
        if (q > qty) {
            cout << "Not enough stock!\n";
        } else {
            qty -= q;
        }
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << qty << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item it[n];

    cout << "\nDefault Item:\n";
    it[0].display();

    for (int i = 1; i < n; i++) {
        int id, qty;
        string name;
        float price;

        cout << "\nEnter Item ID, Name, Price, Quantity: ";
        cin >> id >> name >> price >> qty;

        it[i].setData(id, name, price, qty);
    }

    for (int i = 0; i < n; i++) {
        int add, sell;

        cout << "\nItem " << i + 1 << endl;

        cout << "Add stock: ";
        cin >> add;
        it[i].addStock(add);

        cout << "Sell quantity: ";
        cin >> sell;
        it[i].sell(sell);
    }

    cout << "\n--- Inventory Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << endl;
        it[i].display();
    }

     cout<<"Shakshi Chaudhary_25CE014\n";
    return 0;
}
