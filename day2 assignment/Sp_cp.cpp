#include<iostream>
using namespace std;

int main()
{
    float SP,CP,profit,oneitem_CP;

    cout<<"enter the selling price of 15items"<<endl;
    cin>>SP;

    cout<<"enter the total profit"<<endl;
    cin>>profit;

    CP=SP-profit;
    cout<<"cost price of 15 items is="<<CP<<endl;

    oneitem_CP=CP/15;
    cout<<"cost price of one item is="<<oneitem_CP;

}
