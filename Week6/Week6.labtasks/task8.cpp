#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter the word:";
    cin>>word;
    
    for(int i=0;i<word.length();i++)
    {
        cout<<word[i]<< "is located in" <<i<<endl;
    }

}