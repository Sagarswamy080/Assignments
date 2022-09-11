#include<iostream>
using namespace std;

int main()
{
    int command;
    int balance=100;
    int money=0;
    cout<<"Enter the below command"<<endl;
    cout<<"0 to quit"<<endl;
    cout<<"1 deposit"<<endl;
    cout<<"2 withdrawal"<<endl;
    cout<<"3 check balance"<<endl;
    cin>>command;
    
    switch (command)
    {
    case 0:
           cout<<"thank you visit again"<<endl;
           break;


    case 1:
        cout<<"enter the amount"<<endl;
        cin>>money; 
        balance=balance+money;
        cout<<"new balance= "<<balance<<endl;
        break;

    case 2:
        cout<<"Enter the amount"<<endl;
    
        cin>>money;
        balance=balance-money;
       cout<<"available balance is ="<<balance<<endl;
       break;

    case 3:
         cout<<"current balance = "<<balance<<endl;
         break;

    
     default:
        cout<<"oops try again"<<endl;
        break;
        break;
    }

}