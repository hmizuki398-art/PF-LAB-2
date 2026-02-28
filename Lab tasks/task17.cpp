#include<iostream>
using namespace std;
int main()
{
int wins;
int losses;
int draws;
cout<<"enter wins";
cin>>wins;
cout<<"enter losses";
cin>>losses;
cout<<"enter draws";
cin>>draws;
int total_points;
total_points=(wins*3)+(losses*0)+(draws*1);
cout<<"Total_Points"<<total_points;
cout<<"Pakistan has obtained"<<total_points<<"in the Asia tournament";
}
