/*Да се напише програма во која корисникот внесува два цели броја. Програмата треба да ja најде нивната средна вредност. 
Потоа, програмата треба да го зголеми првиот број за вредноста на таа средна вредност, 
а вториот број да го намали за истата вредност. На крајот, да се испечати новата разлика меѓу броевите.
For example:
Input	Result
3 
5
Razlikata e: 6
11
9
Razlikata e: 22
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,srednavrednost,razlika;
    cin>>a>>b;
    srednavrednost = (a+b)/2;
    a+=srednavrednost;
    b-=srednavrednost;
    razlika = a - b;
    cout<<"Razlikata e "<<razlika;
    return 0;
}
