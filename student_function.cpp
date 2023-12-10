#include "struct.h"
#include "function.h"
void inputStudent(int& a, student& ans)
{
    system("cls");
    a += 1;
    cin.ignore();
    do
    {
        cout << "Input student's id (length: 8)... ";
        cin.getline(ans.id[a], 10);
    }
    while(strlen(ans.id[a]) != 8);
    cout << endl << "Input student's name... ";
    cin.getline(ans.name[a], 50);
    do
    {
        cout << endl << "Input student's date of birth following dd/mm/yyyy... ";
        cin.getline(ans.dateBirth[a], 12);
    }
    while(strlen(ans.dateBirth[a]) != 10);
    cout << endl << "Input student's GPA... ";
    cin.getline(ans.gpa[a], 10);
    cout << endl << "Input student's address... ";
    cin.getline(ans.address[a], 100);
    cout << endl << "Done! Return to menu by ";
    system("pause");
}
void output1(int a, student ans)
{
    system("cls");
    bool check = false;
    if(a >= 0) check = true;
    if(check)
    {
        cout << "_________________Students List_________________" << endl;
        cout << "ID -- name -- date of birth -- GPA -- address" << endl << endl;
        for(int i = 0; i <= a; i++)
        {
            cout << ans.id[i] << " -- " << ans.name[i] << " -- " << ans.dateBirth[i] << " -- " << ans.gpa[i] << " -- " << ans.address[i] << endl;
        }
        cout << endl << "Done! return to menu by ";
    }
    else cout << "No student's data! Return to menu by ";
    system("pause");
}
void output2(int a, student ans)
{
    system("cls");
    char firstname[10], lastname[50];
    bool check = false;
    if(a >= 0) check = true;
    if(check)
    {
        int k;
        int j = 0;
        cout << "_________________Students List_________________" << endl;
        cout << "ID -- first name -- last name -- date of birth -- GPA -- address" << endl << endl;
        for(int i = 0; i <= a; i++)
        {
            for(k = 0; ans.name[i][k] != '\0'; k++) lastname[k] = ans.name[i][k];
            k -= 1;
            while(lastname[k] != ' ')
            {
                for(int l = j; l >= 0; l--) firstname[l + 1] = firstname[l];
                firstname[0] = lastname[k--];
                j++;
            }
            lastname[k] = '\0';
            firstname[j] = '\0';
            cout << ans.id[i] << " -- " << firstname << " -- " << lastname << " -- " << ans.dateBirth[i] << " -- " << ans.gpa[i] << " -- " << ans.address[i] << endl;
            j = 0;
        }
    }
    else cout << "No student's data! Return to menu by ";
    system("pause");
}
void studentClass(int a, student ans)
{
    system("cls");
    char check[10];
    cin.ignore();
    do
    {
        cout << "Input student's id that you want to check (length: 8)... ";
        cin.getline(check, 10);
    }
    while(strlen(check) != 8);
    for(int i = 0; i <= a; i++)
    {
        if(strcmp(check, ans.id[i]) == 0)
        {
            check[0] = 'K';
            check[1] = ans.id[i][0];
            check[2] = ans.id[i][1];
            check[3] = '\0';
            cout << "That student is currently in class " << check << endl << endl;
            cout << "Done! return to menu by ";
            break;
        }
        else if(i == a) cout << endl << "No student's data! return to menu by ";
    }
    system("pause");
}
void compareID(int a, student ans)
{
    system("cls");
    char check[10];
    int a1 = -1, a2 = -1;
    cin.ignore();
    for(int i = 1; i <= 2; i++)
    {
        do
        {
            cout << "Input student's id " << i << "... ";
            cin.getline(check, 10);
        }
        while(strlen(check) != 8);
        for(int j = 0; j <= a; j++)
        {
            if(strcmp(check, ans.id[j]) == 0)
            {
                a2 = a1;
                a1 = j;
                break;
            }
        }
    }
    if(a1 != -1 && a2 != -1)
    {
        cout << endl << "The student you want to see is ";
        if(strcmp(ans.name[a1], ans.name[a2]) < 0)  cout << ans.name[a1] << endl;
        else                                        cout << ans.name[a2] << endl;
        cout << endl << "Done! return to menu by ";
    }
    else cout << endl << "Not enough data! return to menu by ";
    system("pause");
}
void compareGPA_ID(int a, student ans)
{
    system("cls");
    char check[10];
    int a1 = -1, a2 = -1;
    cin.ignore();
    for(int i = 1; i <= 2; i++)
    {
        cout << "Input student's gpa " << i << "... ";
        cin.getline(check, 10);
        for(int j = 0; j <= a; j++)
        {
            if(strcmp(check, ans.gpa[j]) == 0)
            {
                a2 = a1;
                a1 = j;
                break;
            }
        }
    }
    system("cls");
    if(a1 != -1 && a2 != -1)
    {
        cout << "Here's a list of 2 student: " << endl;
        cout << endl << ans.name[a1] << " - " << ans.id[a1];
        cout << endl << ans.name[a2] << " - " << ans.id[a2];
        cout << endl;
        if(a1 != -1 && a2 != -1)
        {
            cout << endl << "The student you want to see is ";
            if(strcmp(ans.name[a1], ans.name[a2]) + strcmp(ans.id[a1], ans.id[a2]) < 0) cout << ans.name[a1] << endl;
            else                                                                        cout << ans.name[a2] << endl;
            cout << endl << "Done! return to menu by ";
        }
    }
    else cout << endl << "Not enough data! return to menu by ";
    system("pause");
}
void compareFirstname_ID(int a, student ans)
{
    system("cls");
    char check[10];
    int a1 = -1, a2 = -1;
    cin.ignore();
    for(int i = 1; i <= 2; i++)
    {
        cout << "Input student's gpa " << i << "... ";
        cin.getline(check, 10);
    }
}