
#include<iostream>
using namespace std;

int sum_data(int arr[],int sizee,int i)
{
   if(i==sizee-1)
        return arr[i];
   else
    {
    return arr[i] + sum_data(arr,sizee,i+1);
   }
}
int main()
{
    int n;
    long int sum=0;
    cout<<"Enter the no. of numbers:\n";
    cin>>n;
    int arr[n];
    int sizee=n;
    cout<<"Enter "<<n<<" Numbers:\n";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"By iterative approach : ";
    for(int i=0 ; i<n ; i++)
    {
        sum+=arr[i];
    }

    cout<<sum;

    cout<<"\nBy recursive approach : ";
    cout<<sum_data(arr,sizee,0);

}
