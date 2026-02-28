#include<iostream>
using namespace std;
int main()
{
string name;
cout<<"Enter your name";
cin>>name;
int matric_marks;
cout<<"Enter matric_marks";
cin>>matric_marks;
int inter_marks;
cout<<"Enter inter_marks";
cin>>inter_marks;
int ecat_marks;
cout<<"Enter ecat_marks";
cin>>ecat_marks;
float aggregate;
aggregate=(matric_marks*10.0)/(1100)+(inter_marks*40.0)/(1200)+(ecat_marks*50.0)/400;
cout<<"Aggregate"<<aggregate;
}
