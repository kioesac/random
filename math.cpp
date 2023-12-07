#include "struct.h"
#include "function.h"
int operator > (date ans1, date ans2)
{
    date kq;
    kq.day    = ans2.day - ans1.day;
    kq.month  = ans2.month - ans1.month;
    kq.year   = ans2.year - ans1.year;
    if(kq.year > 0)             return 1;
    else if(kq.year < 0)        return -1;
    else
    {
        if(kq.month > 0)        return 1;
        else if(kq.month < 0)   return -1;
        else
        {
            if(kq.day > 0)      return 1;
            else if(kq.day < 0) return -1;
            else                return 0;
        }
    }
}

int totalDays(date temp, int monthDays[12])
{
    int kq = temp.day + 365 * temp.year;
    for(int i = 0; i < temp.month; i++) kq += monthDays[i];
    if(temp.month <= 2) temp.year--;
    kq += temp.year / 4 - temp.year / 100 + temp.year / 400;
    return kq;
}