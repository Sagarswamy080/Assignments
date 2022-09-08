      #include<iostream>
      using namespace std;

int main()
{
	int n,a,b,c;
     cout<<"enter a number"<<endl;
     cin>>n;

     //calculations
     // number of denominations of 100rs
     a=n/100;
     cout<<"denominations of 100="<<a<<endl;

     //denominatios of 50
     b=(n%100)/50;
     cout<<"denominations of 50="<<b<<endl;

     //denominations of 10
     c=(n%50)/10;
     cout<<"denominations of 10="<<c<<endl;

     return 0;






}
