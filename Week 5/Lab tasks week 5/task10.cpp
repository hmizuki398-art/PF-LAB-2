#include<iostream>
using namespace std;
main()
{
  int num;
  cout<<"Enter a number:";
  cin>>num;
  for(int digit=0;digit<=9;digit++)
  {
    int count=0;
    int temp=num;
    while(temp>0)
    {
      if(temp%10==digit)
      {
        count++;
      }
      temp/=10;
    }
    if(count>0)
    cout<<"Digit"<<digit<<"Count"<<count;
  }

  
}