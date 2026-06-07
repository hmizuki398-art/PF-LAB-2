#include<iostream>
using namespace std;
main()
{
  int n,n1=0,n2=1,next;
  cout<<"Enter lenght of fabinocci series:";
  cin>>n;
  cout<<n1<<",";
  cout<<n2<<",";
  for(int i=1;i<n;i++)
  {
    next=n1+n2;
    cout<<next<<",";
    n1=n2;
    n2=next;

   
  }
  
  
}