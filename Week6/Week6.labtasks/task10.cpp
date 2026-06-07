#include<iostream>
using namespace std;
int main()
{
    char word[100];
    char result[100];
    int lenght=0;
    cout<<"Enter a string:";
    cin>>word;
    while (word[lenght]='\0')
    {
        lenght++;
    }
   for(int i=0;i<lenght;i++)
   {
     if(word[i]>='a'&& word[i]<='z')
     {
      if(word[i]=='z')
     {
        result[i]='a';
      }
      else 
      {
        result[i]=word[i]+1;
     
      }
    }
    
     
   }
   result[lenght]='\0';
   cout<<"Result:"<<result<<endl;
   return 0;
}

