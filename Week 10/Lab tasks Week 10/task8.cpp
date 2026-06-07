#include<iostream>
#include<cmath>
using namespace std;
main()
{
   double a,b,c;
   cout<<"Enter the number a:";
   cin>>a;
   cout<<"Enterthe number b:";
   cin>>b;
   cout<<"Enter the number c:";
   cin>>c;
   double determinant;
   determinant=sqrt(b)-(4*a*c);
   if(determinant>0)
   {
    int r1,r2;
    r1=(-b+(determinant))/(2*a);
    r2=(-b-(determinant))/(2*a);
    cout<<"Complex solutions of x:"<<r1<<"and"<<r2;

   }
   else if(determinant==0)
   {
    int r1;
    r1=-b/2*a;
    cout<<"Complex soutions of x:"<<r1;
   }
   else
   {
    int r1,r2;
    r1=(-b/2*a)-(determinant)/2*a;
    r2=(-b/2*a)+(determinant)/2*a;
    cout<<"Comlex solutions of x;"<<r1<<"and"<<r2;
   }
   return 0;



}
