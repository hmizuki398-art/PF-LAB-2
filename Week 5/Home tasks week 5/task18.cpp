#include<iostream>
using namespace std;
main()
{  
    while(true)
    {
     cout<<"---Library System---";
    cout<<"1.Add book";
    cout<<"2.Borrow book";
    cout<<"3.View book";
    cout<<"4.Issue book";
    cout<<"5.Exit";
    int choice;
    cout<<"Enter your choice:";
    cin>>choice;
    if(choice==1)
    {
        int book;
        cin>>book;
        cout<<"Enter book name:"<<book;
        cout<<"You added a book:"<<book;
    }
    else if(choice==2)
    {
        int days;
        cin>>days;
        cout<<"You borrowed a book of"<<days;
    }
    else if(choice==3)
    {
        cout<<"Book is viewed.";
    }
    else if(choice==4)
    {
        cout<<"Book is issued.";
    }
    else if(choice==5)
    {
        cout<<"Thanks for coming to library.";
        break;
    }
    else
    {
        cout<<"Invalid choice";
    }
 }

}




