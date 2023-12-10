#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
#include <climits>
#include <string.h>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

struct student
{
    char id[100][10];
    char name[100][50];
    char dateBirth[100][12];
    char gpa[100][5];
    char address[100][100];
};