#include<iostream>
#include<windows.h>
#include<cstdlib>

using namespace std;

void adminLogin();

void customerSystem(
string username[],
string password[],
int &userCount,
int option);

void movieSystem(
int movieID[],
string movieName[],
string movieGenre[],
float movieRating[],
int &movieCount,
int option);

void planSystem(
string planName[],
int planPrice[],
int &planCount,
int option);

void reports(
int movieCount,
int planCount,
int userCount);

int main()
{
    int movieID[50];
    string movieName[50];
    string movieGenre[50];
    float movieRating[50];
    int movieCount=0;

    string planName[20];
    int planPrice[20];
    int planCount=0;

    string username[50];
    string password[50];
    int userCount=0;

    int choice=0;

    while(choice!=20)
    {
        system("cls");

        SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),11);

        cout<<"============================"<<endl;
        cout<<" OTT STREAMING PLATFORM "<<endl;
        cout<<"============================"<<endl;

        cout<<"1. Admin Login"<<endl;
        cout<<"2. Customer Register"<<endl;
        cout<<"3. Customer Login"<<endl;
        cout<<"4. Add Movie"<<endl;
        cout<<"5. View Movies"<<endl;
        cout<<"6. Search Movie"<<endl;
        cout<<"7. Update Movie"<<endl;
        cout<<"8. Delete Movie"<<endl;
        cout<<"9. Add Plan"<<endl;
        cout<<"10. View Plans"<<endl;
        cout<<"11. Search Plan"<<endl;
        cout<<"12. Update Plan"<<endl;
        cout<<"13. Delete Plan"<<endl;
        cout<<"14. Browse Movies"<<endl;
        cout<<"15. Watch Movie"<<endl;
        cout<<"16. Buy Plan"<<endl;
        cout<<"17. Rate Movie"<<endl;
        cout<<"18. Reports"<<endl;
        cout<<"19. About"<<endl;
        cout<<"20. Exit"<<endl;

        cout<<"\nChoice: ";
        cin>>choice;

        if(choice==1)
            adminLogin();

        else if(choice==2 || choice==3)
            customerSystem(
            username,
            password,
            userCount,
            choice);

        else if(choice>=4 && choice<=8)
            movieSystem(
            movieID,
            movieName,
            movieGenre,
            movieRating,
            movieCount,
            choice);

        else if(choice>=9 && choice<=13)
            planSystem(
            planName,
            planPrice,
            planCount,
            choice);

        else if(choice==14 ||
                choice==15 ||
                choice==16 ||
                choice==17)
        {
            cout<<"Customer Feature"<<endl;
            system("pause");
        }

        else if(choice==18)
            reports(
            movieCount,
            planCount,
            userCount);

        else if(choice==19)
        {
            cout<<"OTT Streaming Cinema"<<endl;
            cout<<"Business Application"<<endl;
            system("pause");
        }
    }

    return 0;
}
void adminLogin()
{
    string user;
    string pass;

    string adminUser="admin";
    string adminPass="12345";

    system("cls");

    cout<<"===== ADMIN LOGIN ====="<<endl;

    cout<<"Username: ";
    cin>>user;

    cout<<"Password: ";
    cin>>pass;

    if(user==adminUser &&
       pass==adminPass)
    {
        cout<<"\nLogin Successful"<<endl;
    }
    else
    {
        cout<<"\nWrong Username Or Password"<<endl;
    }

    system("pause");
}
void customerSystem(
string username[],
string password[],
int &userCount,
int option)
{
    if(option==2)
    {
        system("cls");

        cout<<"===== CUSTOMER REGISTER ====="<<endl;

        cout<<"Enter Username: ";
        cin>>username[userCount];

        while(username[userCount].length()<3)
        {
            cout<<"Minimum 3 Characters: ";
            cin>>username[userCount];
        }

        cout<<"Enter Password: ";
        cin>>password[userCount];

        while(password[userCount].length()<5)
        {
            cout<<"Minimum 5 Characters: ";
            cin>>password[userCount];
        }

        userCount++;

        cout<<"\nRegistration Successful"<<endl;

        system("pause");
    }

    else if(option==3)
    {
        system("cls");

        string user;
        string pass;

        int found=0;

        cout<<"===== CUSTOMER LOGIN ====="<<endl;

        cout<<"Username: ";
        cin>>user;

        cout<<"Password: ";
        cin>>pass;

        int i=0;

        while(i<userCount)
        {
            if(user==username[i] &&
               pass==password[i])
            {
                found=1;
            }

            i++;
        }

        if(found==1)
        {
            cout<<"\nLogin Successful"<<endl;
        }
        else
        {
            cout<<"\nInvalid Username Or Password"<<endl;
        }

        system("pause");
    }
}
void movieSystem(
int movieID[],
string movieName[],
string movieGenre[],
float movieRating[],
int &movieCount,
int option)
{
    // ADD MOVIE

    if(option==4)
    {
        system("cls");

        cout<<"===== ADD MOVIE ====="<<endl;

        cout<<"Movie ID: ";
        cin>>movieID[movieCount];

        while(movieID[movieCount] <= 0)
        {
            cout<<"Enter Valid ID: ";
            cin>>movieID[movieCount];
        }

        cout<<"Movie Name: ";
        cin>>movieName[movieCount];

        cout<<"Genre: ";
        cin>>movieGenre[movieCount];

        cout<<"Rating (1-5): ";
        cin>>movieRating[movieCount];

        while(movieRating[movieCount] < 1 ||
              movieRating[movieCount] > 5)
        {
            cout<<"Enter Rating Between 1 and 5: ";
            cin>>movieRating[movieCount];
        }

        movieCount++;

        cout<<"\nMovie Added Successfully"<<endl;

        system("pause");
    }

    // VIEW MOVIES

    else if(option==5)
    {
        system("cls");

        cout<<"===== MOVIE LIST ====="<<endl;

        int i=0;

        while(i<movieCount)
        {
            cout<<"\nMovie "<<i+1<<endl;

            cout<<"ID: "
                <<movieID[i]
                <<endl;

            cout<<"Name: "
                <<movieName[i]
                <<endl;

            cout<<"Genre: "
                <<movieGenre[i]
                <<endl;

            cout<<"Rating: "
                <<movieRating[i]
                <<endl;

            i++;
        }

        system("pause");
    }

    // SEARCH MOVIE

    else if(option==6)
    {
        system("cls");

        int searchID;
        int found=0;

        cout<<"Enter Movie ID: ";
        cin>>searchID;

        int i=0;

        while(i<movieCount)
        {
            if(searchID==movieID[i])
            {
                found=1;

                cout<<"\nMovie Found"<<endl;

                cout<<"Name: "
                    <<movieName[i]
                    <<endl;

                cout<<"Genre: "
                    <<movieGenre[i]
                    <<endl;

                cout<<"Rating: "
                    <<movieRating[i]
                    <<endl;
            }

            i++;
        }

        if(found==0)
        {
            cout<<"\nMovie Not Found"<<endl;
        }

        system("pause");
    }

    // UPDATE MOVIE

    else if(option==7)
    {
        system("cls");

        int searchID;

        cout<<"Enter Movie ID: ";
        cin>>searchID;

        int i=0;

        while(i<movieCount)
        {
            if(searchID==movieID[i])
            {
                cout<<"New Movie Name: ";
                cin>>movieName[i];

                cout<<"New Genre: ";
                cin>>movieGenre[i];

                cout<<"New Rating: ";
                cin>>movieRating[i];

                while(movieRating[i] < 1 ||
                      movieRating[i] > 5)
                {
                    cout<<"Enter Rating Between 1 and 5: ";
                    cin>>movieRating[i];
                }

                cout<<"\nMovie Updated"<<endl;
            }

            i++;
        }

        system("pause");
    }

    // DELETE MOVIE

    else if(option==8)
    {
        system("cls");

        int searchID;

        cout<<"Enter Movie ID: ";
        cin>>searchID;

        int i=0;

        while(i<movieCount)
        {
            if(searchID==movieID[i])
            {
                int j=i;

                while(j<movieCount-1)
                {
                    movieID[j]=movieID[j+1];
                    movieName[j]=movieName[j+1];
                    movieGenre[j]=movieGenre[j+1];
                    movieRating[j]=movieRating[j+1];

                    j++;
                }

                movieCount--;

                cout<<"\nMovie Deleted"<<endl;
            }

            i++;
        }

        system("pause");
    }
}
void planSystem(
string planName[],
int planPrice[],
int &planCount,
int option)
{
    // ADD PLAN

    if(option==9)
    {
        system("cls");

        cout<<"===== ADD PLAN ====="<<endl;

        cout<<"Plan Name: ";
        cin>>planName[planCount];

        cout<<"Plan Price: ";
        cin>>planPrice[planCount];

        while(planPrice[planCount] <= 0)
        {
            cout<<"Enter Valid Price: ";
            cin>>planPrice[planCount];
        }

        planCount++;

        cout<<"\nPlan Added Successfully"<<endl;

        system("pause");
    }

    // VIEW PLANS

    else if(option==10)
    {
        system("cls");

        cout<<"===== ALL PLANS ====="<<endl;

        int i=0;

        while(i<planCount)
        {
            cout<<"\nPlan "<<i+1<<endl;

            cout<<"Name : "
                <<planName[i]
                <<endl;

            cout<<"Price : "
                <<planPrice[i]
                <<endl;

            i++;
        }

        system("pause");
    }

    // SEARCH PLAN

    else if(option==11)
    {
        system("cls");

        string searchPlan;
        int found=0;

        cout<<"Enter Plan Name: ";
        cin>>searchPlan;

        int i=0;

        while(i<planCount)
        {
            if(searchPlan==planName[i])
            {
                found=1;

                cout<<"\nPlan Found"<<endl;

                cout<<"Name : "
                    <<planName[i]
                    <<endl;

                cout<<"Price : "
                    <<planPrice[i]
                    <<endl;
            }

            i++;
        }

        if(found==0)
        {
            cout<<"\nPlan Not Found"<<endl;
        }

        system("pause");
    }

    // UPDATE PLAN

    else if(option==12)
    {
        system("cls");

        string searchPlan;

        cout<<"Enter Plan Name: ";
        cin>>searchPlan;

        int i=0;

        while(i<planCount)
        {
            if(searchPlan==planName[i])
            {
                cout<<"New Plan Name: ";
                cin>>planName[i];

                cout<<"New Price: ";
                cin>>planPrice[i];

                while(planPrice[i] <= 0)
                {
                    cout<<"Enter Valid Price: ";
                    cin>>planPrice[i];
                }

                cout<<"\nPlan Updated"<<endl;
            }

            i++;
        }

        system("pause");
    }

    // DELETE PLAN

    else if(option==13)
    {
        system("cls");

        string searchPlan;

        cout<<"Enter Plan Name: ";
        cin>>searchPlan;

        int i=0;

        while(i<planCount)
        {
            if(searchPlan==planName[i])
            {
                int j=i;

                while(j<planCount-1)
                {
                    planName[j]=planName[j+1];
                    planPrice[j]=planPrice[j+1];

                    j++;
                }

                planCount--;

                cout<<"\nPlan Deleted"<<endl;
            }

            i++;
        }

        system("pause");
    }
}
