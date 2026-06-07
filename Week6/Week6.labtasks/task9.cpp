#include<iostream>
using namespace std;
main()
{
    char word[100];
    int lenght=0;
    cout<<"Enter the word:";
    cin>>word;
    while(word[lenght]!='\0')
    {
       lenght++;
    }
    cout<<"Reversed word:";
  for(int i=lenght-1;i>=0;i--)
  {
    cout<<word[i];
  }

  cout<<endl;
  return 0;
}