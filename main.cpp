#include "struct.h"
#include "function.h"
#include "math.h"
int main()
{
    int i;
    date ans1, ans2;
    ans1.day =     00;
    ans1.month =   00;
    ans1.year =  0000;
    char monthInWord[13][4] =   {"0", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int monthDays[12] =         {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31, 30};
    do
    {
        system("cls");
        cout << "-----menu-----                                                             Ngay hien tai: " << ans1.day << " - " << ans1.month << " - " << ans1.year << endl << endl;
        cout << "1. nhap ngay thang nam" << endl;
        cout << "2. Ngay mai" << endl;
        cout << "3. Ngay hom qua" << endl;
        cout << "4. Tang giam k ngay" << endl << endl;
        cout << "---------------" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << endl << "nhap so ma ban muon thuc hien: ";
        cin >> i;
        switch(i)
        {
            case 0:
                break;
            case 1:
                inputDate(ans1);
                break;
            case 2:
                ngayMai(ans1);
                break;
            case 3:
                ngayHomQua(ans1);
                break;
            case 4:
                tangGiamKNgay(ans1);
                break;
            default:
                cout << endl << "Loi! ";
                i = 0;
                break;
        }
    }
    while(i != 0);
    cout << endl << "Da thoat chuong trinh!" << endl << endl;
}