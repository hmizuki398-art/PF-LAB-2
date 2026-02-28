#include<iostream>
using namespace std;
int main()
{
int megabytes;
cout<<"Enter the size in megabytes";
cin>>megabytes;
int bits;
bits=megabytes*1024*1024*8;
cout<<"Bits"<<bits;
cout<<"megabytes is equivalent to"<<scientific<<bits;
}