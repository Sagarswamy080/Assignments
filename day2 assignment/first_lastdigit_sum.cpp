#include<iostream>
using namespace std;

int main()
{
    int n,a1,a2,a3,a4,sum;

    cout<<"enter a four digit number"<<endl;
    cin>>n;

    //logic
    a1=n%10;
    n=n/10;

    a2=n%10;
    n=n/10;

    a3=n%10;
    n=n/10;

    a4=n;

    sum=a1+a4;
    cout<<"the sum of last first and last digit is ="<<sum;


}
