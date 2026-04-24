#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a, b;

        cout << "Enter numerator: ";
        if (!(cin >> a))
        {
            throw "Invalid input! Please enter an integer.";
        }

        cout << "Enter denominator: ";
        if (!(cin >> b))
        {
            throw "Invalid input! Please enter an integer.";
        }

        if (b == 0)
        {
            throw "Error: Division by zero is not allowed.";
        }

        cout << "Result = " << (a / b) << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}
