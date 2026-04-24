#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout<<"1. "<<endl;

    vector<int> v1 = v;
    reverse(v1.begin(), v1.end());

    cout << "Reversed using std::reverse(): "<<endl;
    for (int val : v1)
    {
        cout << val << " ";
    }

    cout<<"2."<<endl;

    vector<int> v2 = v;
    auto start = v2.begin();
    auto end = v2.end() - 1;

    while (start < end)
    {

        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout <<endl<<"Reversed manually using iterators: ";
    for (int val : v2)
    {
        cout << val << " ";
    }

    return 0;
}
