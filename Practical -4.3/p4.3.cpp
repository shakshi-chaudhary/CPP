#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter size of two arrays:"<<endl;
    cin>>n>>m;

    int* arr1 = new int[n];
    int* arr2 = new int[m];

    cout<<"Enter array 1 of "<<n<<"Elements"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter array 2 of "<<m<<"Elements"<<endl;
    for(int i=0 ; i<m ; i++)
    {
        cin>>arr2[i];
    }

    int* arr3 = new int[n+m];
    for(int i=0 ; i<n ; i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i= 0 ; i<m ; i++)
    {
        arr3[n+i]=arr2[i];
    }

    delete[] arr1;
    delete[] arr2;

    int x= m+n;
    for(int i=0 ; i<x-1 ; i++)
    {
        for(int j=0 ; j<x-1-i ; j++)
        {
            if(arr3[j]>arr3[j+1])
            {
                int temp= arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }
    }

    cout<<"\nThe sorted Merged array is :";
    for(int i=0 ; i<x ; i++)
    {
        cout<<arr3[i]<<"  ";
    }

    delete[] arr3;


}
