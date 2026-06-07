#include<iostream>
using namespace std;
bool check(string word, char letter)
    {
        bool isfound(false);
        
            for(int i=0;word[i]=i/0;i++)
            {
                if (word[i]==letter)
                {
                     isfound=true;
                     break;
                }
            }

        return isfound;
    }
    main()
    {
        string word;
        cout<<"Enter the word:";
        cin>>word;
        char letter;
        cout<<"Enter the letter you want to check:";
        cin>>letter;
        if(check(word,letter))
        {
            cout<<"Letter"<<letter<< "is found in word"<<word;
        }
        else
        {
            cout<<"Letter"<<letter<< "is not found in word"<<word;
        }


    }