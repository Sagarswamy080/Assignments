#include<iostream>
using namespace std;

int main()
{
    float distance,D_m, D_f,D_c,D_i;

    cout<<"enter the distance in Km"<<endl;
    cin>>distance;

    //distance in meters
    D_m=(distance*1000)<<endl;
    cout<<"distance is meters is "<<"\t"<<D_m<<endl;

    //distance in feet
    D_f=( 3280.84*distance)<<endl;
    cout<<"distance is feet"<<D_f<<endl;

    //distance is cm
    D_c=(100000*distance)<<endl;
    cout<<"distance is cm is"<< D_c<<endl;

    //distance in inches
    D_i=(39370.1*distance)<<endl;
    cout<<"distance in inches"<<D_i<<endl;

    return 0;




}
