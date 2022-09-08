#include<iostream>
using namespace std;

int main()
{
    int ram,sham,ajay;
    cout<<"enter the ages of ram sham and ajay"<<endl;
    cin>>ram>>sham>>ajay;

    if(ram<sham)
    {
        if(ram<ajay)
        {
            cout<<"ram is youngest"<<endl;
        }
    }
    if(sham<ram)
    {
        if(sham<ajay)
        {
            cout<<"sham is youngest"<<endl;
        }
        else
        {
            cout<<"ajay is youngest"<<endl;
        }



    }
}
