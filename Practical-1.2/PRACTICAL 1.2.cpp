#include<iostream>
using namespace std;

class Book {
    int id, copies;
    string title, author;

public:
    void add() {
        cout<<"Enter ID: ";
        cin>>id;
        cin.ignore();

        cout<<"Enter Title: ";
        getline(cin, title);

        cout<<"Enter Author: ";
        getline(cin, author);

        cout<<"Enter Copies: ";
        cin>>copies;
    }

    void display() {
        cout<<"\nID: "<<id;
        cout<<"\nTitle: "<<title;
        cout<<"\nAuthor: "<<author;
        cout<<"\nCopies: "<<copies<<"\n";
    }

    void issue(string name) {
        if(title == name && copies > 0) {
            copies--;
            cout<<"Book Issued\n";
        }
    }

    void returnBook(int bookId) {
        if(id == bookId) {
            copies++;
            cout<<"Book Returned\n";
        }
    }
};

int main() {
    Book b[10];
    int n = 0, choice;

    do {
        cout<<"\n1.Add\n2.Issue\n3.Return\n4.Display\n5.Exit\n";
        cin>>choice;

        switch(choice) {
        case 1:
            b[n].add();
            n++;
            break;

        case 2: {
            string name;
            cout<<"Enter title: ";
            cin.ignore();
            getline(cin, name);

            for(int i=0;i<n;i++)
                b[i].issue(name);
            break;
        }

        case 3: {
            int id;
            cout<<"Enter ID: ";
            cin>>id;

            for(int i=0;i<n;i++)
                b[i].returnBook(id);
            break;
        }

        case 4:
            for(int i=0;i<n;i++)
                b[i].display();
            break;
        }

    } while(choice != 5);

    return 0;
}
