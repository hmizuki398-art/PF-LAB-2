#include<iostream>
#include<cmath>
using namespace std;
main()
{
   double distance,height,angledeg,anglerad;
   cout<<"Enter the distance:";
   cin>>distance;
   cout<<"Enter the angle:";
   cin>>angledeg;
   anglerad=angledeg/57.29;
   height=distance*anglerad;
   cout<<"The height of the tree is:"<<height<<"feet";
   return 0;


}