#include<iostream>
using namespace std;
main()
{  
    //using nested loop
    int rows=3;
    int cols=4;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 }
