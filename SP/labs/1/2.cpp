// Да се напише програма со која корисникот внесува два цели броја, а програмата ќе изврши замена на броевите, 
одностно првиот број ќе ја земе вредноста на вториот, а вториот ќе ја земе вредноста на првиот. 
Притоа да се испечати разликата на броевите пред и после направената замена.
Упатство: за да направите замена на броевите користете привремена променлива //
#include<iostream>
using namespace std;
int main()
{
    int a,b,razlika1,razlika2;
    cin>>a>>b;
    razlika1 = a-b;
    cout<<"Vrednosta na broj1 i broj2 pred zamena na broevite e:"<<a<<","<<b<<" a razlikata: "<< razlika1<<endl;
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    razlika2 = a-b;
    cout<<"Vrednosta na broj1 i broj2 posle zamena na brovite:"<<a<<","<<b<<" a razlikata: "<< razlika2<<endl;
    return 0; 
}
