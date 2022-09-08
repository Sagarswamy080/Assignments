#include<iostream>
using namespace std;

int main()
{
    int t_population=80000; //given

    //finding total men
    int total_men=(52*80000)/100;
    cout<<"total number of men is"<<total_men<<endl;;

    //total women
    int total_women= t_population - total_men;
    cout<<"total number of women "<<total_women<<endl;

    //total literate men
    int lit_men=(35*80000)/100;
    cout<<"total literate men "<<lit_men<<endl;

    //total illiterate men
    int ilt_men= (total_men) - (lit_men);
    cout<<"total illiterate men is "<<ilt_men<<endl;

    //total literacy calculation
    int total_lit=(48*80000)/100;
    cout<<"total literate members "<<total_lit;

    //total women literacy
    int lit_women= total_lit - lit_men;
    cout<<" number of literate women "<<lit_women<<endl;

     //total illiterate women
    int ilt_women=total_women -lit_women;
    cout<<"number of illiterate women "<<ilt_women<<endl;

     //total number of illiterate men and women is
    int  total_illiterate=ilt_women+ilt_men;

    cout<<"total illiterate men and women is"<<total_illiterate;




}
