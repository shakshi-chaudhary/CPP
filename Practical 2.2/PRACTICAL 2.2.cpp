#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float m1, m2, m3;

public:
    Student() {
        roll = 0;
        name = "Test";
        m1 = m2 = m3 = 0;
    }

    void setData(int r, string n, float a, float b, float c) {
        roll = r;
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    float average() {
        return (m1 + m2 + m3) / 3;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Average Marks: " << average() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    cout << "\nDefault Student Record:\n";
    s[0].display();

    for (int i = 1; i < n; i++) {
        int r;
        string n;
        float a, b, c;

        cout << "\nEnter details of student " << i << endl;
        cout << "Roll, Name, Marks(3): ";
        cin >> r >> n >> a >> b >> c;

        s[i].setData(r, n, a, b, c);
    }

    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].display();
    }

   cout<<"Shakshi Chaudhary_25CE014\n";
    return 0;
}
