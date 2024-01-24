/* Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број. 
За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0). 
Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:
[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]
0: 2
1: 3
2: 1
3: 1
4: 1
за броевите 97654 48654 12345 12343 1263 12443 12643 12777 */
#include<iostream>
using namespace std;
int pozicijaMax(int x)
{
    int pozicija;
    int counter=1;
    int max=x%10;
    x=x/10;
    while(x>0)
    {
        if(max<x%10)
        {max=x%10;
        pozicija=counter;}
        x=x/10;
        counter++;
    }
    return pozicija;
}
int main()
{
    int x,p0=0,p1=0,p2=0,p3=0,p4=0;
    while(cin>>x)
    {
        if(pozicijaMax(x)==0)
        {
          p0++;
        }
        else if(pozicijaMax(x)==1)
        {
          p1++;
        }
        else if(pozicijaMax(x)==2)
        {
          p2++;
        }
        else if(pozicijaMax(x)==3)
        {
          p3++;
        }
        else if(pozicijaMax(x)==4)
        {
          p4++;
        }
    }
    cout<<"0: "<<p0<<endl;
    cout<<"1: "<<p1<<endl;
    cout<<"2: "<<p2<<endl;
    cout<<"3: "<<p3<<endl;
    cout<<"4: "<<p4<<endl;
    return 0;
}
