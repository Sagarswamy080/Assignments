#include<iostream>
using namespace std;

int main()
{
    int a[10],i,p=0,n=0,z=0;
    cout<<"Enter the elements of array"<<endl;
   
    for(i=0;i<10;i++)
    {
         cin>>a[i];
    }
    
    for(i=0;i<10;i++)
    {
        if(a[i]>0)
        {
           p++;
        }
        else if(a[i]<0)
        {
            n++;
        }
            
        else
           z++;
                

    }
    cout<<"Number of positive numbers= "<<p<<endl;
    cout<<"Number of positive numbers= "<<n<<endl;
    cout<<"Number of positive numbers= "<<z<<endl;

    


}