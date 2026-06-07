#include<iostream>
using namespace std;
const int rows=5,cols=3;
void toyotaBlue(string cars[][5])
     {
        for(int i=0;i<rows;i++)
        {
         if(cars[i][0]=="Toyota" && cars[i][1]=="Blue")
         cout<<cars[i][0]<<" "<<cars[i][1]<<" "<<cars[i][2]<<endl;
        }
     }
int countRedcars(string cars[][3])
{
    int count=0;
    for(int i=0;i<rows;i++){
        if(cars[i][1]=="Red")
        count++;
        return count;
    }
}
int countNissancars(string cars[][3])
{
    int count=0;
    for(int i=0;i<rows;i++)
    {
        if(cars[i][0]=="Nissan")
        count++;
        return count;
    }
}
int converter(string cars[][3],string color)
{
    int sum=0;
    for(int i;i<rows;i++)
{
    if(cars[i][1]=="colors")
    sum++;
    return sum;
}
}
void transposeMatrix(int cars[][3])
{
    int temp[cols][rows];
    for(int i=0;i<rows;i++)
    
        for(int j=0;j<cols;j++)
        temp[j][i]=cars[i][j];
       for(int i=0;i<rows;i++)
       {
        for(int j=0;j<cols;j++)
        {
            cout<<temp[i][j]<<" ";
            cout<<endl;
        }
}
int main()
{
    string cars[rows][cols]={
    {"Toyota","Red","231"},
    {"Nissan","Red","456"},
    {"Toyota","Blue","789"},
    {"Honda","Blue","101"},
    {"Toyota","Red","122"}
   };
 cout<<toyotaBlue(cars);
 cout<<"Red Cars"<<countRedCars(cars);
 cout<<"Blue Cars"<<countNissanCars(cars);
 cout<<"Converter"<<converter(cars,blue);
 cout<<transposeMatrix(cars);
 return 0;
}
     
