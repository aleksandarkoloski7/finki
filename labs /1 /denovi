// Да се напише програма која од стандарден влез чита цел број(денови). На излез да се отпечати колку години, месеци и денови се тоа.
Претпоставуваме дека сите месеци имаат 30 дена и секоја година има 365 дена.
Write a program that reads an integer (days) from standard input. You will need to calculate how many years, months and days it is.
We assume that all months have 30 days and each year has 365 days.
For example:
Input	Result
2535
Years: 6, months: 11, days: 15
// 
#include<iostream>
using namespace std;
int main()
{
    int denovi;
    cin>>denovi;
    int godini = denovi/365;
    int meseci = denovi%365/30;
    int ostatokdenovi = denovi%365%30;
    cout<<"Years: "<< godini <<","<<" months: "<<meseci<<","<<" days: "<<ostatokdenovi; 
    return 0;
}  
