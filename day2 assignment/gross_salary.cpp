#include<iostream>
using namespace std;
int main()
{
   double BS,DA,HR,GS;

   cout<<"enter the basic salary of ramesh"<<endl;
   cin>>BS;

   //dearness allowances
   DA=(40*BS)/100;

   //home rest allowances
   HR=(20*BS)/100;

  // gross salary of ramesh calculation

     GS=BS+HR+DA;

   cout<<"the gross salary of ramesh is "<<GS<<endl;

   return 0;


}
