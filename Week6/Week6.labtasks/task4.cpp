#include<iostream>
using namespace std;
main()
{
    int num[5];
    for(int count=0;count<=5;count=count+1)
    {
        cout<<"Enter Number";
        cin>>num[count];
    }
    cout<<"Enter the first element of array:"<<num[0]<<endl;
    cout<<"Enter the last element of array:"<<num[4]<<endl;
}