#include<iostream>
using namespace std;

int main()
{
    int n,n1,n2,n3,n4,n5,sum;
    cout<<"enter the 5 digit number"<<endl;
    cin>>n;

    n1=n%10;
    n=n/10;

    n2=n%10;
    n=n/10;

    n3=n%10;
    n=n/10;

    n4=n%10;
    n=n/10;

    n5=n%10;
    n=n/10;

    sum=n1+n2+n3+n4+n5;
    cout<<"the soum of five digit number is"<<sum;

    return 0;

}
