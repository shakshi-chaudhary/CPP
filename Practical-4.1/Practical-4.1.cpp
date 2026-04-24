#include <iostream>
using namespace std;

class DynamicArray {
    int* arr;
    int size;

public:
    DynamicArray() {
        arr = nullptr;
        size = 0;
    }

    // Insert element at end
    void insert(int value) {
        int* newArr = new int[size + 1];

        for (int i = 0; i < size; i++)
            newArr[i] = arr[i];

        newArr[size] = value;

        delete[] arr;
        arr = newArr;
        size++;
    }

    // Delete element at position
    void remove(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position\n";
            return;
        }

        int* newArr = new int[size - 1];

        for (int i = 0, j = 0; i < size; i++) {
            if (i != pos)
                newArr[j++] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        size--;
    }

    // Display array
    void display() {
        cout << "Array: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    DynamicArray da;

    da.insert(10);
    da.insert(20);
    da.insert(30);
    da.display();

    da.remove(1); // delete element at index 1
    da.display();

    return 0;
}
