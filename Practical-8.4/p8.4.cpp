#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    string filename;
    ifstream file;

    while (true)
    {
        cout << "Enter file name (or type exit): ";
        cin >> filename;

        if (filename == "exit")
        {
            cout << "Exiting program.\n";
            return 0;
        }

        file.open(filename);
        if (!file)
        {
            cout << "Error: File not found. Try again.\n";
        } else
        {
            break;
        }
    }

    string line;
    int lineNumber = 0;


    while (getline(file, line))
        {
        lineNumber++;
        stringstream ss(line);

        double num, sum = 0;
        int count = 0;
        bool valid = true;


        while (ss >> num)
        {
            sum += num;
            count++;
        }

        if (!ss.eof())
        {
            valid = false;
        }

        if (valid && count > 0)
        {
            cout << "Line " << lineNumber
                 << " -> Sum = " << sum
                 << ", Avg = " << (sum / count) << endl;
        } else
        {
            cout << "Line " << lineNumber
                 << " -> Invalid data (skipped)\n";
        }
    }

    file.close();
    return 0;
}
