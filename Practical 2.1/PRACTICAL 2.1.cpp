#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    void setData(float l, float w) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    void display() {
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle r[n];

    for (int i = 0; i < n; i++) {
        float l, w;
        cout << "\nRectangle " << i + 1 << endl;
        cout << "Enter length and width: ";
        cin >> l >> w;

        r[i].setData(l, w);
    }

    cout << "\n--- Rectangle Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nRectangle " << i + 1 << endl;
        r[i].display();
    }
    cout<<"Shakshi Chaudhary_25CE014\n";

    return 0;
}
