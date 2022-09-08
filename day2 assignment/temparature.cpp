#include<iostream>
using namespace std;

int main()
{
    float F,C;

    cout<<"enter temperature in Fahrenheit"<<endl;
    cin>>F;

    //convertion calculation
    C=(F-32)*5/9;
    cout<<"temperature in Celsius is="<<C;

    return 0;


}
