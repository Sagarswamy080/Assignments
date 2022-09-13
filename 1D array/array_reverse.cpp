#include<iostream>
using namespace std;

int main()
{
    int arr[10],i;
    cout<<"Enter the array elements"<<endl;

    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    cout<<"the reverse of array is"<<endl;
    for(i=9;i>=0;i--)
    {
        cout<<arr[i]<<" "<<endl;
    }
}