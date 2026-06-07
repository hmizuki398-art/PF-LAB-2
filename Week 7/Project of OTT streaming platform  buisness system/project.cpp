#include<iostream>
#include<windows.h>
#include<cstdlib>

using namespace std;

int main()
{
    // Movies
    int movieID[50];
    string movieName[50];
    string movieGenre[50];
    float movieRating[50];
    int movieCount = 0;

    // Plans
    string planName[20];
    int planPrice[20];
    int planCount = 0;

    // Users
    string username[50];
    string password[50];
    int userCount = 0;

    // Login
    string adminUser = "admin";
    string adminPass = "12345";

    int choice = 0;

    while(choice != 20)
    {
        system("cls");

        SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),11);

        cout<<"===================================="<<endl;
        cout<<"     OTT STREAMING PLATFORM"<<endl;
        cout<<"===================================="<<endl;

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
        cout<<"11. Update Plan"<<endl;
        cout<<"12. Delete Plan"<<endl;
        cout<<"13. Browse Movies"<<endl;
        cout<<"14. Watch Movie"<<endl;
        cout<<"15. Buy Plan"<<endl;
        cout<<"16. Rate Movie"<<endl;
        cout<<"17. View Profile"<<endl;
        cout<<"18. Reports"<<endl;
        cout<<"19. About"<<endl;
        cout<<"20. Exit"<<endl;

        cout<<"\nEnter Choice: ";
        cin>>choice;

        // ADMIN LOGIN

        if(choice==1)
        {
            string u,p;

            cout<<"Username: ";
            cin>>u;

            cout<<"Password: ";
            cin>>p;

            if(u==adminUser && p==adminPass)
            {
                cout<<"Admin Login Successful"<<endl;
            }
            else
            {
                cout<<"Wrong Username or Password"<<endl;
            }

            system("pause");
        }

        // CUSTOMER REGISTER

        else if(choice==2)
        {
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

            cout<<"Registration Successful"<<endl;

            system("pause");
        }

        // CUSTOMER LOGIN

        else if(choice==3)
        {
            string u,p;
            int found=0;

            cout<<"Username: ";
            cin>>u;

            cout<<"Password: ";
            cin>>p;

            int i=0;

            while(i<userCount)
            {
                if(u==username[i] &&
                   p==password[i])
                {
                    found=1;
                }

                i++;
            }

            if(found==1)
            {
                cout<<"Login Successful"<<endl;
            }
            else
            {
                cout<<"Invalid Login"<<endl;
            }

            system("pause");
        }

        // ADD MOVIE

        else if(choice==4)
        {
            cout<<"Movie ID: ";
            cin>>movieID[movieCount];

            while(movieID[movieCount]<=0)
            {
                cout<<"Enter Positive ID: ";
                cin>>movieID[movieCount];
            }

            cout<<"Movie Name: ";
            cin>>movieName[movieCount];

            cout<<"Genre: ";
            cin>>movieGenre[movieCount];

            cout<<"Rating(1-5): ";
            cin>>movieRating[movieCount];

            while(movieRating[movieCount]<1 ||
                  movieRating[movieCount]>5)
            {
                cout<<"Enter Rating Between 1 and 5: ";
                cin>>movieRating[movieCount];
            }

            movieCount++;

            cout<<"Movie Added Successfully"<<endl;

            system("pause");
        }

        // VIEW MOVIES

        else if(choice==5)
        {
            cout<<"\nMOVIES LIST\n"<<endl;

            int i=0;

            while(i<movieCount)
            {
                cout<<"ID: "<<movieID[i]<<endl;
                cout<<"Name: "<<movieName[i]<<endl;
                cout<<"Genre: "<<movieGenre[i]<<endl;
                cout<<"Rating: "<<movieRating[i]<<endl;
                cout<<"----------------------"<<endl;

                i++;
            }

            system("pause");
        }

        // SEARCH MOVIE

        else if(choice==6)
        {
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

                    cout<<"Movie Found"<<endl;
                    cout<<movieName[i]<<endl;
                    cout<<movieGenre[i]<<endl;
                    cout<<movieRating[i]<<endl;
                }

                i++;
            }

            if(found==0)
            {
                cout<<"Movie Not Found"<<endl;
            }

            system("pause");
        }

        // UPDATE MOVIE

        else if(choice==7)
        {
            int searchID;

            cout<<"Enter Movie ID: ";
            cin>>searchID;

            int i=0;

            while(i<movieCount)
            {
                if(searchID==movieID[i])
                {
                    cout<<"New Name: ";
                    cin>>movieName[i];

                    cout<<"New Genre: ";
                    cin>>movieGenre[i];

                    cout<<"New Rating: ";
                    cin>>movieRating[i];
                }

                i++;
            }

            cout<<"Movie Updated"<<endl;

            system("pause");
        }

        // DELETE MOVIE

        else if(choice==8)
        {
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
                }

                i++;
            }

            cout<<"Movie Deleted"<<endl;

            system("pause");
        }
                // ADD PLAN

        else if(choice==9)
        {
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

            cout<<"Plan Added Successfully"<<endl;

            system("pause");
        }

        // VIEW PLANS

        else if(choice==10)
        {
            int i=0;

            cout<<"\nAVAILABLE PLANS\n"<<endl;

            while(i<planCount)
            {
                cout<<"Plan: "<<planName[i]<<endl;
                cout<<"Price: "<<planPrice[i]<<endl;
                cout<<"--------------------"<<endl;

                i++;
            }

            system("pause");
        }

        // UPDATE PLAN

        else if(choice==11)
        {
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
                }

                i++;
            }

            cout<<"Plan Updated"<<endl;

            system("pause");
        }

        // DELETE PLAN

        else if(choice==12)
        {
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
                }

                i++;
            }

            cout<<"Plan Deleted"<<endl;

            system("pause");
        }

        // BROWSE MOVIES

        else if(choice==13)
        {
            int i=0;

            cout<<"\nNOW STREAMING\n"<<endl;

            while(i<movieCount)
            {
                cout<<movieName[i]
                    <<" ("<<movieGenre[i]<<")"
                    <<endl;

                i++;
            }

            system("pause");
        }

        // WATCH MOVIE

        else if(choice==14)
        {
            string watchMovie;

            cout<<"Enter Movie Name: ";
            cin>>watchMovie;

            int found=0;
            int i=0;

            while(i<movieCount)
            {
                if(watchMovie==movieName[i])
                {
                    found=1;

                    cout<<"\nLoading Movie..."<<endl;
                    cout<<"Now Watching "
                        <<movieName[i]
                        <<endl;
                }

                i++;
            }

            if(found==0)
            {
                cout<<"Movie Not Available"<<endl;
            }

            system("pause");
        }

        // BUY PLAN

        else if(choice==15)
        {
            string selectedPlan;

            cout<<"Enter Plan Name: ";
            cin>>selectedPlan;

            int found=0;
            int i=0;

            while(i<planCount)
            {
                if(selectedPlan==planName[i])
                {
                    found=1;

                    cout<<"Subscription Purchased"<<endl;
                    cout<<"Amount Paid: "
                        <<planPrice[i]
                        <<endl;
                }

                i++;
            }

            if(found==0)
            {
                cout<<"Plan Not Found"<<endl;
            }

            system("pause");
        }

        // RATE MOVIE

        else if(choice==16)
        {
            string searchMovie;
            float newRating;

            cout<<"Movie Name: ";
            cin>>searchMovie;

            int i=0;

            while(i<movieCount)
            {
                if(searchMovie==movieName[i])
                {
                    cout<<"New Rating (1-5): ";
                    cin>>newRating;

                    while(newRating<1 ||
                          newRating>5)
                    {
                        cout<<"Enter Rating 1-5: ";
                        cin>>newRating;
                    }

                    movieRating[i]=newRating;
                }

                i++;
            }

            cout<<"Rating Submitted"<<endl;

            system("pause");
        }

        // VIEW PROFILE

        else if(choice==17)
        {
            cout<<"\nUSER PROFILE"<<endl;

            cout<<"Registered Users: "
                <<userCount
                <<endl;

            system("pause");
        }

        // REPORTS

        else if(choice==18)
        {
            cout<<"\nSYSTEM REPORT"<<endl;

            cout<<"Total Movies : "
                <<movieCount
                <<endl;

            cout<<"Total Plans : "
                <<planCount
                <<endl;

            cout<<"Total Users : "
                <<userCount
                <<endl;

            system("pause");
        }

        // ABOUT

        else if(choice==19)
        {
            cout<<"OTT Streaming Cinema Platform"<<endl;
            cout<<"Business Application Project"<<endl;
            cout<<"Developed in C++"<<endl;

            system("pause");
        }

        // EXIT

        else if(choice==20)
        {
            cout<<"Thank You For Using System"<<endl;
        }

        else
        {
            cout<<"Invalid Choice"<<endl;
            system("pause");
        }

    }

    return 0;
}