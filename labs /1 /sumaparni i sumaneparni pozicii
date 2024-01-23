//
Да се напише програма која за петцифрен број внесен од стандарден влез ќе ја пресмета сумата на цифрите на парните и непарните позиции соодветно.
Напомена: Последната цифра во бројот се наоѓа на 0-та позиција. 
Појаснување: За бројот 54321 цифрата на 0-та позиција е 1, додека цифрата на 4-та позиција е 5.
For example:
Input	Result
54321
Sumata na cifrite na parnite pozicii e 9
Sumata na cifrite na neparnite pozicii e 6
//
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sumaparni=0,sumaneparni=0;
    sumaparni = (n%10) + (n/100%10) + (n/10000);
    sumaneparni = (n/10%10) + (n/1000%10);
    cout<<"Sumata na cifrite na parnite pozicii e "<< sumaparni<<endl;
    cout<<"Sumata na cifrite na neparnite pozicii e "<< sumaneparni;
    return 0;
}
