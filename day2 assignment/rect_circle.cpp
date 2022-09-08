#include<iostream>
using namespace std;

int main()
{

    float length,breadth,radius,area_R,perimeter,area_c, circumference;

    cout<<"enter the length of rectangle"<<endl;
    cin>>length;

    cout<<"enter the breadth of rectangle"<<endl;
    cin>>breadth;


     //area of rectangle
    area_R=length*breadth;
    perimeter=2*(length+breadth);
    cout<<"area of rectangle is="<<area_R<<endl;
    cout<<" perimeter of rectangle is="<<perimeter<<endl;



    cout<<"enter the radius of the circle"<<endl;
    cin>>radius;


   // area calculations
   area_c=(3.142*radius*radius);
   circumference=(2*3.124*radius);
   cout<<"area of circle is="<<area_c<<endl;
   cout<<"circumference of circle is="<<circumference<<endl;


   return 0;
}
