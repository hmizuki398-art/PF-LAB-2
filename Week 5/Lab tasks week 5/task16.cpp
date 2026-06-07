#include<iostream>
using namespace std;
main()
{
    while(true)
    {
        cout<<"---Restaurant Management System---"<<endl;
        int choice;
        cout<<"1.View food Menue"<<endl;
        cout<<"2.Place Order"<<endl;;
        cout<<"3.View Order Status"<<endl;;
        cout<<"4.Generate Bill"<<endl;;
        cout<<"5.Contact Staff"<<endl;;
        cout<<"6.Exit";
        cout<<"Enter your choice:"<<endl;;
        cin>>choice;
        if(choice==1)
        {
          cout<<"You selected:View Food Menue.";
        }
        else if(choice==2)
        {
           cout<<"You selected:Place order."; 
        }
        else if(choice==3){
            cout<<"You selected:View Order Status";
        }
        else if(choice==4){
             cout<<"You selected:Generate Bill";
        }
        else if(choice==5){
              cout<<"You selected:Contact Staff";
        }
         else if(choice==6){
              cout<<"Existing Restuarant Management System.";
              break;
        }
        else
           {
              cout<<"Invalid choice";

           }
    }


}