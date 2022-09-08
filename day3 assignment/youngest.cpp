#include<iostream>
using namespace std;

int main()
{
    int ram_age,sham_age,ajay_age;
    cout<<"enter the ram age"<<endl;
    cin>>ram_age;

    cout<<"enter the sham age"<<endl;
    cin>>sham_age;

    cout<<"enter the Ajay age"<<endl;
    cin>>ajay_age;

    if((ram_age<sham_age) &&(ram_age<ajay_age))
    {
        cout<<"Ram is youngest"<<endl;
    }
    else if((sham_age<ram_age) &&(sham_age<ajay_age))
    {
        cout<<"Sham is youngest"<<endl;
    }
    else
    {
        cout<<"Ajay is youngest";
    }
    return 0;
}
