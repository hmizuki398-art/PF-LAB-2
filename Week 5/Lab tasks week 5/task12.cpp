#include<iostream>
using namespace std;
main()
{
   int gcd,lcm,a,b,x,y;
   cin>>a;
   cin>>b;
   cout<<"Enter two numbers:"<<a<<b;
   x=a;y=b;
   while(b!=0)
   {
    int temp;
    temp=b;
    b=a%b;
    a=temp;
   }
   gcd=a;
   //lcm
   lcm=(x*y)/gcd;
   cout<<"GCD:"<<gcd;
   cout<<"LCM:"<<lcm;
   
    
}