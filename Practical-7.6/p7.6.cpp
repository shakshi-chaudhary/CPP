#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor Called" << endl;
    }

    virtual ~Base()
    {
        cout << "Base Destructor Called" << endl;
    }
};

class Derived : public Base
{
private:
    int* data;

public:
    Derived()
    {
        cout << "Derived Constructor Called" << endl;
        data = new int[5];
    }

    ~Derived()
    {
        cout << "Derived Destructor Called" << endl;
        delete[] data;
    }
};

int main()
 {
    Base* ptr;

    ptr = new Derived();

    delete ptr;

    return 0;
}
