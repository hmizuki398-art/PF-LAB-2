#include<iostream>
using namespace std;
main()
{
  int n;
  cin>>n;
  int count1=0,count2=0,count3=0,count4=0,count5=0;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    if(num<200){
      count1++;
    }
    if(num<400)
    {
      count2++;
    }
    if(num<600)
    {
      count3++;
    }
    if(num<800)
    {
    count4++;
    }
    else
    {
      count5++;
    }
  }
  double p1=(count1*100.0)/n;
  double p2=(count2*100.0)/n;
  double p3=(count3*100.0)/n;
  double p4=(count4*100.0)/n;
  double p5=(count5*100.0)/n;
  cout<<p1<<"%"<<endl;
  cout<<p2<<"%"<<endl;
  cout<<p3<<"%"<<endl;
  cout<<p4<<"%"<<endl;
  cout<<p5<<"%"<<endl;
  return 0;
}
  
  


   
