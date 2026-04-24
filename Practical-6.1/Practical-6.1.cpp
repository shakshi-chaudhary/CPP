#include <iostream>
#include <vector>
using namespace std;

class Shape {
protected:
    float radius;

public:
    void setRadius(float r) { radius = r; }
    float getRadius() { return radius; }
};

class Circle : public Shape {
public:
    float area() {
        return 3.14f * radius * radius;
    }
};

int main() {
    int n;
    cout << "Enter number of circles: ";
    cin >> n;

    Circle staticArr[10];
    cout << "\nEnter radii (Static):\n";
    for (int i = 0; i < n; i++) {
        float r;
        cin >> r;
        staticArr[i].setRadius(r);
    }

    cout << "\nAreas (Static):\n";
    for (int i = 0; i < n; i++) {
        cout << "Circle " << i+1 << ": " << staticArr[i].area() << endl;
    }

    vector<Circle> dynArr(n);
    cout << "\nEnter radii (Dynamic):\n";
    for (int i = 0; i < n; i++) {
        float r;
        cin >> r;
        dynArr[i].setRadius(r);
    }

    cout << "\nAreas (Dynamic):\n";
    for (int i = 0; i < n; i++) {
        cout << "Circle " << i+1 << ": " << dynArr[i].area() << endl;
    }

    return 0;
}
