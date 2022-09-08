#include<iostream>
using namespace std;

int main()
{
  int PA;
  float SI,RI,no_years;

  cout<<"enter the principle amount"<<endl;
  cin>>PA;

  cout<<"enter no of years"<<endl;
  cin>>no_years;

  cout<<"enter rate of interest"<<endl;
  cin>>RI;

  SI=(PA*no_years*RI)/100;

  cout<<"the simple interest is="<<SI;

  return 0;





}
