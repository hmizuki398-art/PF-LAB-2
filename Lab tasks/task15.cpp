#include<iostream>
using namespace std;
int main()
{
int voltage_in_volts;
cout<<"enter voltage_in_volts";
cin>>voltage_in_volts;
int current_in_amperes;
cout<<"enter current_in_amperes";
cin>>current_in_amperes;
int power_in_watts;
power_in_watts=voltage_in_volts*current_in_amperes;
cout<<"Power_in_Watts"<<power_in_watts;
}
