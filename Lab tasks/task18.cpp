#include<iostream>
using namespace std;
main()
{
int population;
cout<<"enter population in the world";
cin>>population;
int decades;
cout<<"decades";
cin>>decades;
int Months;
Months=120*decades;
cout<<"Months";
int n_birthrate;
cout<<"enter n_birthrate in month";
cin>>n_birthrate;
int total_population;
total_population=(population)+(Months*n_birthrate);
cout<<"Total population"<<total_population;
}
