#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter the number of elements:";
    cin>>number;
    int n[number];
    for(int num=0;num<=number;num=num+1)
    {
       cin>>n[num];
    }
     for(int num=0;num<=number;num=num+1)
     {
        cout<<"Enter number"<<n[num];
     }
    

    
}