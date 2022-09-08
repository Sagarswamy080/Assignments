#include<iostream>
using namespace std;

int main()
{
    float kan,Eng,Math,social,hindi,aggregate,percentage,obtained_marks;

    cout<<"enter the marks of all subject"<<endl;

    cout<<"enter the marks obtained in kannada"<<endl;
    cin>>kan;

    cout<<"enter the marks obtained in English"<<endl;
    cin>>Eng;

    cout<<"enter the marks obtained in Maths"<<endl;
    cin>>Math;

    cout<<"enter the marks obtained in social science"<<endl;
    cin>>social;

    cout<<"enter the marks obtained in hindi"<<endl;
    cin>>hindi;


    //total marks calculation
    obtained_marks=kan+Eng+Math+social+hindi;

    //percentage calculation
    percentage=(obtained_marks*100)/500;
    cout<<"percentage is="<<percentage<<endl;

    //aggrigate calculation
    aggregate=obtained_marks/5;
    cout<<"aggregate is ="<<aggregate;






}
