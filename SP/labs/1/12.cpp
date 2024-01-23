/* Да се напише програма која вчитува од стандарден влез должина на катетите (цели броеви) на еден триаголник.
Ваша задача е да ги пресметате и испечатите квадратот на хипотенузата и плоштината на триаголникот.
Write a program that gets from standard input the length of the legs of a triangle.
Your task is to calculate and print the square of the hypotenuse and the area of the triangle.
For example:
Input	Result
2 2
8
2
*/
#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   double kvadrathipotenuza = (a*a+b*b);
   double plostina = 0.5*a*b;
   cout<<kvadrathipotenuza<<endl;
   cout<<plostina;
   return 0;
}
