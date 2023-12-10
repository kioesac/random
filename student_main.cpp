#include "struct.h"
#include "function.h"
int main()
{
    int f;
    student ans;
    int a = -1;
    do
    {
        system("cls");
        cout << "__________menu__________"  << endl << endl;
        cout << "1. New Student"                    << endl;
        cout << "2. Students List"                  << endl;
        cout << "3. Another Students List"          << endl;
        cout << "4. Checking class"                 << endl;
        cout << "5. Comparing ID"                   << endl;
        cout << "6. Comparing GPA and ID"           << endl;
        cout                                        << endl;
        cout << "------------------------"          << endl;
        cout << "0. Exist"                  << endl << endl;
        cout << "please input a number according to that function: ";
        cin >> f;
        switch(f)
        {
            case 0:
                break;
            case 1:
                inputStudent(a, ans);
                break;
            case 2:
                output1(a, ans);
                break;
            case 3:
                output2(a, ans);
                break;
            case 4:
                studentClass(a, ans);
                break;
            case 5:
                compareID(a, ans);
                break;
            case 6:
                compareGPA_ID(a, ans);
                break;
            default:
                cout << "Error! ";
                f = 0;
                break;
        }
    }
    while(f != 0);
    cout << "Existing..." << endl;
}