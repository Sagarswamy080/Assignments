#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cout<<"Enter a alphabet"<<endl;
    cin>>alpha;

    switch(alpha)
    {
               case 'A':
               case 'a':
                        cout<<"it is vowel"<<endl;
                        break;
                case 'E':
                case 'e':
                         cout<<"it is vowel"<<endl;
                         break;

                case 'I':
                case 'i':
                         cout<<"it is vowel"<<endl;
                         break;

                case 'O':
                case 'o':
                         cout<<"it is vowel"<<endl;
                         break;

                case 'U':
                case 'u':
                         cout<<"it is vowel"<<endl;
                         break;

                default:
                         cout<<"it is consonant"<<endl;
                         break;
    }
}