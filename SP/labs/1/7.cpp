/* Напишете C++ програма со која ќе пресметате просек на оцените на даден студент.
На влез се вчитуваат пет цели броеви претставувајќи ги оцените на студентот во еден семестар.
Напомена: просекот да се претстави како float */
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    float prosek = (a+b+c+d+e)/5.0;
    cout<<"Average grade: "<<prosek;
    return 0;
}
  
