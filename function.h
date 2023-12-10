#include "struct.h"

//Phan date

date inputDate(date& ans);                                                                  //P01
void ngayMai(date ans1);                                                                    //P07
void ngayHomQua(date ans1);                                                                 //P08
void tangGiamKNgay(date ans1);                                                              //P09 + P10
void khoangCachVoiNgayDauTienCuaNam(date ans1, int monthDays[12]);                          //P11
void khoangCachVoiNgayDauTienCuaNam1970(date ans1, int monthDays[12]);                      //P12
void thuCuaNgayHienTai(date ans1, char dateInWeek[8][10], int monthDays[12]);               //P14

//Phan Student

void inputStudent(int& a, student& ans);                                                    //P15
void output1(int a, student ans);                                                           //P16
void output2(int a, student ans);                                                           //P17
void studentClass(int a, student ans);                                                      //P18
void compareID(int a, student ans);                                                         //P19
void compareGPA_ID(int a, student ans);                                                     //P20


