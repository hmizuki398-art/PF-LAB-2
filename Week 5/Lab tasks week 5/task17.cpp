#include<iostream>
using namespace std;
main()
{
    while(true)
    {
        int x;
        cin>>x;
        int y;
        cin>>y;
        int choice;
        cout<<"---Simple Calculator---"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Clear Screen"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice(1-6):"<<endl;
        cin>>choice;
        cout<<"Enter first number"<<x<<endl;
        cout<<"Enter second number"<<y<<endl;
        if(choice==1)
        {
            cout<<"Sum:"<<x+y;
        }
        else if(choice==2)
        {
            cout<<"Subtraction:"<<x-y;
        }
        else if(choice==3)
        {
        cout<<"Multiplication:"<<x*y;
        }
        else if(choice==4)
        {
            cout<<"Division"<<x/y;
        }
        else if(choice==5)
        {
            system("clear");
        }
        else if(choice==6)
        {
            cout<<"Existing Calculator;Goodbye.";
            break;
        }
        else{
            cout<<"Invalid Option";
        }
    }


}
