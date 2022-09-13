#include<iostream>
using namespace std;

int main()
{
    int a[10],i;

    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
        int max=a[0];
         
    for(i=1;i<10;i++)
    {   
      if(max<a[i])
      {
        max=a[i];
      }
       
    }
      int min=a[0];
      for(i=1;i<10;i++)
      {
        if(a[i]<min)
        {
            min=a[i];
        }
      }

    cout<<"the maximum value of an array is= " <<max<<endl;
    cout<<"the maximum value of an array is= " <<min<<endl;
        
        
    

}