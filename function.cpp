#include "struct.h"
#include "function.h"
#include "math.h"
date inputDate(date& ans1)
{
    cout << "Nhap ngay thang nam theo dinh dang dd mm yyyy: ";
    cin >> ans1.day >> ans1.month >> ans1.year;
    cout << endl << "Thanh cong!" << endl;
    system("pause");
    return ans1;
}
void ngayMai(date ans1)
{
    switch(ans1.month)
    {
        case 12:
            if(ans1.day == 31)
            {
                ans1.day = 1;
                ans1.month = 1;
                ans1.year += 1;
            }
            else ans1.day += 1;
            break;
        case 10:
        case 8:
        case 7:
        case 5:
        case 3:
        case 1:
            if(ans1.day == 31)
            {
                ans1.day = 1;
                ans1.month += 1;
            }
            else ans1.day += 1;
            break;
        case 11:
        case 9:
        case 6:
        case 4:
            if(ans1.day == 30)
            {
                ans1.day = 1;
                ans1.month += 1;
            }
            else ans1.day += 1;
            break;
        case 2:
            if((ans1.year % 4 == 0 && ans1.year % 100 != 0) || ans1.year % 400 == 0)
            {
                if(ans1.day == 29)
                {
                    ans1.day = 1;
                    ans1.month += 1;
                }
                else ans1.day += 1;
            }
            else
            {
                if(ans1.day == 28)
                {
                    ans1.day = 1;
                    ans1.month += 1;
                }
                else ans1.day += 1;
            }
            break;

    }
    cout << "Ngay mai: " << ans1.day << " - " << ans1.month << " - " << ans1.year << endl;
    cout << endl << "Thanh cong!" << endl;
    system("pause");
}
void ngayHomQua(date ans1)
{
    switch(ans1.month)
    {
        case 12:
        case 10:
        case 7:
        case 5:
            if(ans1.day == 1)
            {
                ans1.day = 30;
                ans1.month -= 1;
            }
            else ans1.day -= 1;
            break;
        case 11:
        case 9:
        case 8:
        case 6:
        case 4:
        case 2:
            if(ans1.day == 1)
            {
                ans1.day = 31;
                ans1.month -= 1;
            }
            else ans1.day -= 1;
            break;
        case 3:
            if((ans1.year % 4 == 0 && ans1.year % 100 != 0) || ans1.year % 400 == 0)
            {
                if(ans1.day == 1)
                {
                    ans1.day = 29;
                    ans1.month -= 1;
                }
                else ans1.day -= 1;
            }
            else
            {
                if(ans1.day == 1)
                {
                    ans1.day = 28;
                    ans1.month -= 1;
                }
                else ans1.day -= 1;
            }
            break;
        case 1:
            if(ans1.day == 1)
            {
                ans1.day = 31;
                ans1.month = 12;
                ans1.year -= 1;
            }
            else ans1.day -= 1;
            break;

    }
    cout << "Ngay mai: " << ans1.day << " - " << ans1.month << " - " << ans1.year << endl;
    cout << endl << "Thanh cong!" << endl;
    system("pause");
}
void tangGiamKNgay(date ans1)
{
    int k;
    cout << "Moi ban nhap so ngay thay doi (neu giam thi nhap so am): ";
    cin >> k;
    if(k >= 0 || ans1.day != 0 || ans1.month != 0 || ans1.year != 0)
    {
        ans1.day += k;
        while(ans1.day >= 32)
        {
            switch(ans1.month)
            {
                case 12:
                    if(ans1.day > 31)
                    {
                        ans1.day -= 31;
                        ans1.month = 1;
                        ans1.year += 1;
                    }
                    break;
                case 10:
                case 8:
                case 7:
                case 5:
                case 3:
                case 1:
                    if(ans1.day > 31)
                    {
                        ans1.day -= 31;
                        ans1.month += 1;
                    }
                    break;
                case 11:
                case 9:
                case 6:
                case 4:
                    if(ans1.day > 30)
                    {
                        ans1.day -= 30;
                        ans1.month += 1;
                    }
                    break;
                case 2:
                    if((ans1.year % 4 == 0 && ans1.year % 100 != 0) || ans1.year % 400 == 0)
                    {
                        if(ans1.day > 29)
                        {
                            ans1.day -= 29;
                            ans1.month += 1;

                        }
                    }
                    else
                    {
                        if(ans1.day > 28)
                        {
                            ans1.day -= 28;
                            ans1.month += 1;

                        }
                    }
                    break;

            }
        }
        cout << "Ngay moi: " << ans1.day << " - " << ans1.month << " - " << ans1.year << endl;
        cout << endl << "Thanh cong!" << endl;
        system("pause");
    }
    else if(k < 0 || ans1.day != 0 || ans1.month != 0 || ans1.year != 0)
    {
        ans1.day += k;
        while(ans1.day <= 0)
        {
            switch(ans1.month)
            {
                case 12:
                case 10:
                case 7:
                case 5:
                    if(ans1.day <= 0)
                    {
                        ans1.day += 30;
                        ans1.month -= 1;
                    }
                    break;
                case 11:
                case 9:
                case 8:
                case 6:
                case 4:
                case 2:
                    if(ans1.day <= 0)
                    {
                        ans1.day += 31;
                        ans1.month -= 1;
                    }
                    break;
                case 3:
                    if((ans1.year % 4 == 0 && ans1.year % 100 != 0) || ans1.year % 400 == 0)
                    {
                        if(ans1.day <= 0)
                        {
                            ans1.day += 29;
                            ans1.month -= 1;
                        }
                    }
                    else
                    {
                        if(ans1.day <= 0)
                        {
                            ans1.day += 28;
                            ans1.month -= 1;
                        }
                    }
                    break;
                case 1:
                    if(ans1.day <= 0)
                    {
                        ans1.day = 32 + k;
                        ans1.month = 12;
                        ans1.year -= 1;
                    }
                    else ans1.day += k;
                    break;

            }
        }
        cout << "Ngay moi: " << ans1.day << " - " << ans1.month << " - " << ans1.year << endl;
        cout << endl << "Thanh cong!" << endl;
        system("pause");
    }
    else
    {
        cout << "Hay nhap ngay hien tai truoc!!!" << endl << endl;
        system("pause");
    }
}
void khoangCachVoiNgayDauTienCuaNam(date ans1, int monthDays[12])
{
    if(ans1.day != 0 && ans1.month != 0 && ans1.year != 0)
    {
        date ans2;
        ans2.day = 1;
        ans2.month = 1;
        ans2.year = ans1.year;
        int day1 = totalDays(ans1, monthDays);
        int day2 = totalDays(ans2, monthDays);
        cout << "Khoang cach:   " << day1 - day2 << " ngay!" << endl << endl;
        cout << "Thanh cong!" << endl;
        system("pause");
    }
    else
    {
        cout << "Hay nhap ngay hien tai truoc!!!" << endl << endl;
        system("pause");
    }
}
void khoangCachVoiNgayDauTienCuaNam1970(date ans1, int monthDays[12])
{
    if(ans1.day != 0 && ans1.month != 0 && ans1.year != 0)
    {
        date ans2;
        ans2.day = 1;
        ans2.month = 1;
        ans2.year = 1970;
        int day1 = totalDays(ans1, monthDays);
        int day2 = totalDays(ans2, monthDays);
        cout << "Khoang cach:   " << day1 - day2 << " ngay!" << endl << endl;
        cout << "Thanh cong!" << endl;
        system("pause");
    }
    else
    {
        cout << "Hay nhap ngay hien tai truoc!!!" << endl << endl;
        system("pause");
    }
}
void thuCuaNgayHienTai(date ans1, char dateInWeek[8][10], int monthDays[12])
{
    date ans2;
    ans2.day = 1;
    ans2.month = 1;
    ans2.year = 1970;
    int sau = totalDays(ans1, monthDays);
    int truoc = totalDays(ans2, monthDays);
    char week[10];
    int i = 0;
    bool reverse = false;
    if(sau < truoc)
    {
        int temp = truoc;
        truoc = sau;
        sau = temp;
        reverse = true;
        i = 5;
    }
    while(truoc < sau)
    {
        truoc += 1;
        if(reverse)
        {
            strcpy(week, dateInWeek[i--]);
            if(i == 0) i = 6;
        }
        else
        {
            strcpy(week, dateInWeek[i++]);
            if(i == 7) i = 0;
        }
    }
    cout << week << endl << endl;
    cout << "Thanh cong!" << endl;
    system("pause");
}