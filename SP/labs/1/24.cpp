/* За еден студент се читаат освоени поени од 5 активности за еден предмет. 
Услов за еден предмет да биде положен е да се имаат над 50 освоени поени. 
Ако студентот има 0-50 поени не го положил предметот, ако има 51-60 го положил со 6, 61-70 го положил со 7, 71-80 го положил со 8, 81-90 го положил со 9 и над 90 го положил со 10. 
Да се испечати оценката која ја имал студентот,неговите поени и да се испечати 1 доколку има услов да добие повисока оценка, а во спротивно 0. Услов за повисока оценка има само ако недостига 1 поен за добивање на повисока оценка.
For example:
Input	Result
30 40 5 10 3
Ocenka: 9, poeni: 88
Nema uslov za povisoka ocenka */
#include<iostream>
using namespace std;
int main()
{
    int p1,p2,p3,p4,p5,polozen=0;
    cin>>p1>>p2>>p3>>p4>>p5;
    polozen=p1+p2+p3+p4+p5;
    if(polozen<=50)
    cout<<"Predmetot ne e polozen"<<endl;
    else if(polozen<=60)
    cout<<"Ocenka: 6, poeni: "<<polozen<<endl;
    else if(polozen<=70)
    cout<<"Ocenka: 7, poeni: "<<polozen<<endl;
    else if(polozen<=80)
    cout<<"Ocenka: 8, poeni: "<<polozen<<endl;
    else if(polozen<=90)
    cout<<"Ocenka: 9, poeni: "<<polozen<<endl;
    else if(polozen>90)
    cout<<"Ocenka: 10, poeni: "<<polozen<<endl;
    if(polozen==60 || polozen==70 || polozen==80 || polozen==90)
    cout<<"Ima uslov za povisoka ocenka "<<endl;
    else if(polozen>50 && polozen<100)
    cout<<"Nema uslov za povisoka ocenka "<<endl;
    return 0;
}
