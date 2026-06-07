#include<iostream>
using namespace std;
main()
{
    int age;
    double washingprice;
    int toyprice;
    cin>>age;
    cin>>washingprice;
    cin>>toyprice;
    cout<<"Lilly's age"<<age<<endl<<"Washing machine Price"<<washingprice<<endl<<"Price of toy"<<toyprice<<endl;
    double money=0;
    int moneyFromBirthday=0;
    int toyscount=0;

    for(int i=0;i<age;i++)
    {
        if(i%2==0)
        {
            moneyFromBirthday+=10*(i/2);
            moneyFromBirthday--;
        }
        else
        {
            toyscount++;

        }
        
    }
    money=moneyFromBirthday+(toyscount*toyprice);
    if(money>washingprice)
    {
        cout<<"YES!"<<endl<<money-washingprice;
    }
    else
    {
      cout<<"No!";
    }

}
