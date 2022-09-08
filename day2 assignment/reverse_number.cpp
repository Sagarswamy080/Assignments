#include<iostream>
using namespace std;

int main()
{
    int n,rev_number,n1,n2,n3,n4,n5;

    cout<<"enter the number n= "<<endl;
    cin>>n;

    //calculations
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

    //calculating reverse of a number

    rev_number=(n1*10)+n2;
    rev_number=(rev_number*10)+n3;
    rev_number=(rev_number*10)+n4;
    rev_number=(rev_number*10)+n5;

    cout<<"the reverse of a number n is "<<rev_number;





}
