/* Да се напише програма која чита радиус на кружница од стандарден влез. На излез да се испечати периметарот и плоштината на кружницата.
Write a program that reads the radius of a circle from standard input. Output the perimeter and area of the circle. */
#include<iostream>
using namespace std;
int main()
{
   double r;
   cin>>r;
   double perimetar = 2*r*3.14;
   double plostina = r*r*3.14;
   cout<<"Perimetar: "<<perimetar<<endl;
   cout<<"Plostina: "<<plostina;
   return 0;
}
