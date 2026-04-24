#include <iostream>
#include <cmath>
using namespace std;


class NegativeNumberException
{
public:
    const char* message()
    {
        return "Error: Cannot calculate square root of a negative number.";
    }
};

int main()
{
    double num;

    try
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            throw NegativeNumberException();
        }

        cout << "Square root = " << sqrt(num) << endl;
    }
    catch (NegativeNumberException e)
    {
        cout << e.message() << endl;
    }

    return 0;
}
