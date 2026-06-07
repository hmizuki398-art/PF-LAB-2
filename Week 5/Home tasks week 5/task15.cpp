#include<iostream>
using namespace std;
main()
{
    int inheritedmoney;
    int targetyear;
    cin>>inheritedmoney;
    cin>>targetyear;
    cout<<"Inherited Money"<<inheritedmoney<<endl;
    cout<<"Target Year"<<targetyear<<endl;
    int age=18;
    double leftmoney=inheritedmoney;
    int currentyear=1800;
    while(currentyear<=targetyear)
    {
        if(currentyear%2==0)
        {
            leftmoney-=12000;
        }
        else
        { 
            leftmoney-=12000+50*age;

        }
       age++;
       currentyear++;
    }
    if(leftmoney>=0)
    {
        cout<<"He will have enough money"<<leftmoney;
    }
    else
    {
        cout<<"No,He will not have enough money"<<leftmoney;
    }
    return 0;
}