#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;

// ===================== FUNCTION PROTOTYPES =====================
void loadMovies(int movieID[], string movieName[], string movieGenre[], float movieRating[], int &movieCount);
void saveMovies(int movieID[], string movieName[], string movieGenre[], float movieRating[], int movieCount);

void loadPlans(string planName[], int planPrice[], int &planCount);
void savePlans(string planName[], int planPrice[], int planCount);

void loadUsers(string username[], string password[], int &userCount);
void saveUsers(string username[], string password[], int userCount);

void adminLogin();

void movieSystem(int movieID[], string movieName[], string movieGenre[], float movieRating[], int &movieCount, int option);
void planSystem(string planName[], int planPrice[], int &planCount, int option);
void customerSystem(string username[], string password[], int &userCount, int option);

// ===================== MAIN FUNCTION =====================
int main()
{
    int movieID[50], movieCount = 0;
    string movieName[50], movieGenre[50];
    float movieRating[50];

    string planName[20];
    int planPrice[20], planCount = 0;

    string username[50], password[50];
    int userCount = 0;

    loadMovies(movieID, movieName, movieGenre, movieRating, movieCount);
    loadPlans(planName, planPrice, planCount);
    loadUsers(username, password, userCount);

    int choice = 0;

    while(choice != 20)
    {
        system("cls");

        cout << "==============================\n";
        cout << "   OTT STREAMING PLATFORM     \n";
        cout << "==============================\n";

        cout << "1. Admin Login\n";
        cout << "2. Register Customer\n";
        cout << "3. Customer Login\n";
        cout << "4. Add Movie\n";
        cout << "5. View Movies\n";
        cout << "6. Search Movie\n";
        cout << "7. Update Movie\n";
        cout << "8. Delete Movie\n";
        cout << "9. Add Plan\n";
        cout << "10. View Plans\n";
        cout << "11. Search Plan\n";
        cout << "12. Update Plan\n";
        cout << "13. Delete Plan\n";
        cout << "20. Exit\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        if(choice == 1) adminLogin();

        else if(choice == 2 || choice == 3)
            customerSystem(username, password, userCount, choice);

        else if(choice >= 4 && choice <= 8)
            movieSystem(movieID, movieName, movieGenre, movieRating, movieCount, choice);

        else if(choice >= 9 && choice <= 13)
            planSystem(planName, planPrice, planCount, choice);

        saveMovies(movieID, movieName, movieGenre, movieRating, movieCount);
        savePlans(planName, planPrice, planCount);
        saveUsers(username, password, userCount);
    }

    return 0;
}

// ===================== ADMIN LOGIN =====================
void adminLogin()
{
    string u, p;
    system("cls");

    cout << "ADMIN LOGIN\n";
    cout << "Username: ";
    cin >> u;
    cout << "Password: ";
    cin >> p;

    if(u == "admin" && p == "12345")
        cout << "Login Successful!\n";
    else
        cout << "Invalid Login!\n";

    system("pause");
}

// ===================== CUSTOMER SYSTEM =====================
void customerSystem(string username[], string password[], int &userCount, int option)
{
    if(option == 2)
    {
        system("cls");
        cout << "REGISTER USER\n";

        cout << "Username: ";
        cin >> username[userCount];

        cout << "Password: ";
        cin >> password[userCount];

        userCount++;
        cout << "Registered Successfully!\n";
        system("pause");
    }
    else if(option == 3)
    {
        system("cls");
        string u,p;
        int found = 0;

        cout << "LOGIN USER\n";
        cout << "Username: ";
        cin >> u;
        cout << "Password: ";
        cin >> p;

        for(int i=0;i<userCount;i++)
        {
            if(username[i]==u && password[i]==p)
                found = 1;
        }

        if(found) cout << "Login Successful!\n";
        else cout << "Login Failed!\n";

        system("pause");
    }
}

// ===================== MOVIE SYSTEM =====================
void movieSystem(int movieID[], string movieName[], string movieGenre[], float movieRating[], int &movieCount, int option)
{
    if(option == 4)
    {
        cout << "ADD MOVIE\n";
        cout << "ID: "; cin >> movieID[movieCount];
        cout << "Name: "; cin >> movieName[movieCount];
        cout << "Genre: "; cin >> movieGenre[movieCount];
        cout << "Rating: "; cin >> movieRating[movieCount];
        movieCount++;
    }

    else if(option == 5)
    {
        for(int i=0;i<movieCount;i++)
        {
            cout << movieID[i] << " | " << movieName[i]
                 << " | " << movieGenre[i]
                 << " | " << movieRating[i] << endl;
        }
        system("pause");
    }

    else if(option == 6)
    {
        int id; cout << "Enter ID: "; cin >> id;

        for(int i=0;i<movieCount;i++)
        {
            if(movieID[i]==id)
                cout << movieName[i] << " Found!\n";
        }
        system("pause");
    }

    else if(option == 7)
    {
        int id; cout << "Enter ID: "; cin >> id;

        for(int i=0;i<movieCount;i++)
        {
            if(movieID[i]==id)
            {
                cout << "New Name: "; cin >> movieName[i];
                cout << "Updated!\n";
            }
        }
        system("pause");
    }

    else if(option == 8)
    {
        int id; cout << "Enter ID: "; cin >> id;

        for(int i=0;i<movieCount;i++)
        {
            if(movieID[i]==id)
            {
                for(int j=i;j<movieCount-1;j++)
                {
                    movieID[j]=movieID[j+1];
                    movieName[j]=movieName[j+1];
                    movieGenre[j]=movieGenre[j+1];
                    movieRating[j]=movieRating[j+1];
                }
                movieCount--;
                cout << "Deleted!\n";
            }
        }
        system("pause");
    }
}

// ===================== PLAN SYSTEM =====================
void planSystem(string planName[], int planPrice[], int &planCount, int option)
{
    if(option == 9)
    {
        cout << "ADD PLAN\n";
        cout << "Name: "; cin >> planName[planCount];
        cout << "Price: "; cin >> planPrice[planCount];
        planCount++;
    }

    else if(option == 10)
    {
        for(int i=0;i<planCount;i++)
            cout << planName[i] << " " << planPrice[i] << endl;

        system("pause");
    }

    else if(option == 11)
    {
        string name;
        cout << "Search Plan: ";
        cin >> name;

        for(int i=0;i<planCount;i++)
        {
            if(planName[i]==name)
                cout << "Found: " << planPrice[i] << endl;
        }
        system("pause");
    }

    else if(option == 12)
    {
        string name;
        cout << "Update Plan: ";
        cin >> name;

        for(int i=0;i<planCount;i++)
        {
            if(planName[i]==name)
            {
                cin >> planPrice[i];
                cout << "Updated!\n";
            }
        }
        system("pause");
    }

    else if(option == 13)
    {
        string name;
        cout << "Delete Plan: ";
        cin >> name;

        for(int i=0;i<planCount;i++)
        {
            if(planName[i]==name)
            {
                for(int j=i;j<planCount-1;j++)
                {
                    planName[j]=planName[j+1];
                    planPrice[j]=planPrice[j+1];
                }
                planCount--;
                cout << "Deleted!\n";
            }
        }
        system("pause");
    }
}

// ===================== FILE HANDLING =====================

void saveMovies(int movieID[], string movieName[], string movieGenre[], float movieRating[], int movieCount)
{
    ofstream file("movies.txt");
    for(int i=0;i<movieCount;i++)
        file << movieID[i] << " " << movieName[i] << " "
             << movieGenre[i] << " " << movieRating[i] << endl;
    file.close();
}

void loadMovies(int movieID[], string movieName[], string movieGenre[], float movieRating[], int &movieCount)
{
    ifstream file("movies.txt");
    while(file >> movieID[movieCount] >> movieName[movieCount]
               >> movieGenre[movieCount] >> movieRating[movieCount])
        movieCount++;
    file.close();
}

void savePlans(string planName[], int planPrice[], int planCount)
{
    ofstream file("plans.txt");
    for(int i=0;i<planCount;i++)
        file << planName[i] << " " << planPrice[i] << endl;
    file.close();
}

void loadPlans(string planName[], int planPrice[], int &planCount)
{
    ifstream file("plans.txt");
    while(file >> planName[planCount] >> planPrice[planCount])
        planCount++;
    file.close();
}

void saveUsers(string username[], string password[], int userCount)
{
    ofstream file("users.txt");
    for(int i=0;i<userCount;i++)
        file << username[i] << " " << password[i] << endl;
    file.close();
}

void loadUsers(string username[], string password[], int &userCount)
{
    ifstream file("users.txt");
    while(file >> username[userCount] >> password[userCount])
        userCount++;
    file.close();
}