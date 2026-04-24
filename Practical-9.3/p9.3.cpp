#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
 {
    int n, x;
    set<int> s;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }

    cout << "\nUnique elements (sorted): ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    vector<int> v(s.begin(), s.end());

    cout << "\n\nElements copied to vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
