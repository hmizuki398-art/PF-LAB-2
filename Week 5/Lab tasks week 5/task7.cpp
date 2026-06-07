#include<iostream>
using namespace std;
main()
{
    int n,table;
    cout<<"Enter number:";
    cin>>n;
    for(int i=1;i<=10;i=i+1)
    {
        table=n*i;
        cout<<n<<"*"<<i<<"="<<table<<endl;
    }
    
}