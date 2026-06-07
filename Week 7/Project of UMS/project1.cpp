#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int TOTAL_STUDENTS=1000; //total size
int index=0;

//Data structures
string nameArray[TOTAL_STUDENTS];
int ageArray[TOTAL_STUDENTS];
float matricArray[TOTAL_STUDENTS];
float interArray[TOTAL_STUDENTS];
float ecatArray[TOTAL_STUDENTS];
float aggriArray[TOTAL_STUDENTS];
string pref1Array[TOTAL_STUDENTS];
string pref2Array[TOTAL_STUDENTS];
string pref3Array[TOTAL_STUDENTS];

   while (true)
   {
     //main header of ums
     system("cls");
     cout<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"----University Admission System----"<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"User Menue"<<endl;
     cout<<"1 Admin"<<endl;
     cout<<"2 Student"<<endl;
     cout<<"3 Exist"<<endl;
     int user_option;
     cout<<"Enter Option:";
     cin>>user_option;
     cout<<"You Choose"<<user_option<<endl;
     if(user_option==1)
     {
        //write here admin code
        system("cls");
        cout<<"This is admin menu";
        cout<<"Enter user name:";
        string user_name;
        cin>>user_name;
        cout<<"Enter Passward:";
        cin>>Pass;
        getch();
     }
     else if(user_option==2)
     {
        //write here student code
        system("cls");
        cout<<"This is student menu"<<endl;
        cout<<"Welcome to UMS menu:"<<endl;
        cout<<"Enter your name:"<<endl;
        string name;
        cin>>name;
        cout<<"Enter your age:"<<endl;
        int age;
        cin>>age;
        cout<<"Enter your matric marks:"<<endl;
        float matric_marks;
        cin>>matric_marks;
        cout<<"Enter Fsc marks:"<<endl;
        float Fsc_marks;
        cin>>Fsc_marks;
        cout<<"Enter ecat marks:"<<endl;
        float ecat_marks;
        cin>>ecat_marks;
        cout<<"Enter CS,CE,EE as your preferences:"<<endl;
        cout<<"Enter your 1st Pref:"<<endl;
        string pref_1;
        cin>>pref_1;

        cout<<"Enter your 2nd Pref:"<<endl;
        string pref_2;  
        cin>>pref_2;

        cout<<"Enter your 3rd Pref:"<<endl;
        string pref_3;
        cin>>pref_3;

        nameArray[index]=name;
        ageArray[index]=age;
        matricArray[index]=matric_marks;
        interArray[index]=Fsc_marks;
        ecatArray[index]=ecat_marks;
        pref1Array[index]=pref_1;
        pref2Array[index]=pref_2;
        pref3Array[index]=pref_3;
        index=index+1;
        cout<<"Your data has been saved";





        getch();
     }
     else if(user_option==3)
     {
        break;
     }
     else
     {
        cout<<"You have entered wrong option";
     } 
   }  //end of main while loop
         cout<<endl<<"Thanks for using this application";


}