#include<iostream>
using namespace std;
int main()
{
int imposter;
int players;
int chance;
int percentage;
cout<<"enter imposter";
cin>>imposter;
cout<<"enter players";
cin>>players;
chance=100*(imposter/players);
cout<<"Chance="<<chance<<"%";
}