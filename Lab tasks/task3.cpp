#include<iostream>
using namespace std;
int main()
{
int minutes;
int fps;
int totalframes;
cout<<"enter minutes";
cin>>minutes;
cout<<"enter fps";
cin>>fps;
int frames=minutes*60*fps;
cout<<"total frames"<<frames;
}