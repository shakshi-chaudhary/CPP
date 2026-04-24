#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<string, vector<string>> directory;
    int choice;
    string folder, file;

    do {
        cout << "  Directory Menu  ";
        cout << "1. Add Folder\n";
        cout << "2. Add File to Folder\n";
        cout << "3. Display Directory\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter folder name: ";
            cin >> folder;

            directory[folder]; // creates folder if not exists
            cout << "Folder added.\n";
        }

        else if (choice == 2)
        {
            cout << "Enter folder name: ";
            cin >> folder;

            if (directory.find(folder) != directory.end())
            {
                cout << "Enter file name: ";
                cin >> file;

                directory[folder].push_back(file);
                cout << "File added.\n";
            } else
            {
                cout << "Folder not found!\n";
            }
        }

        else if (choice == 3)
        {
            cout << " Directory Contents (Sorted by Folder Name) ";

            for (auto it = directory.begin(); it != directory.end(); it++)
            {
                cout << it->first << ":\n";

                for (auto fileIt = it->second.begin(); fileIt != it->second.end(); fileIt++)
                {
                    cout << "  - " << *fileIt << endl;
                }
            }
        }

    } while (choice != 4);

    return 0;
}
