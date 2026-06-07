#include<iostream>
using namespace std;
main()
{
    int num,sum=0;;
    cout<<"Enter a number:";
    cin>>num;
    while(num>0)
    {

        sum+=num%10;
        num/=10;

    }
     cout<<"SUM"<<sum<<endl;
    
}
