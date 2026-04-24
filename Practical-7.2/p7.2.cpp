#include<iostream>
using namespace std;

class Complex
{
    int real,imag;

public:
    void getData(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator - (Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.getData(5, 6);
    c2.getData(2, 4);

    c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();

    return 0;
}
