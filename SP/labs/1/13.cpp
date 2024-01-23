/* Дадени се еден четирицифрен и еден трицифрен број. Да се пресмета аритметичка средина на броевите кои се наоѓаат на парните позииции на трицифрениот број и на непарните позиции на четирицифрениот број. 
Напомена: Под парни позиции се смета и нултата позиција. 
пр. за бројот 2468 на нулта позиција е бројот 2, на прва позиција е бр 4, на втора бр 6 и на трета бр 8.
For example:
Input	Result
123
4567
4 */
#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   int neparen1,neparen3;
   neparen1 = a/100%10;
   neparen3 = a%10;
   int paren0,paren2;
   paren0 = b/100%10;
   paren2 = b%10;
   double asredina = ((neparen1+neparen3)+(paren0+paren2))/4.0;
   cout<<asredina;
   return 0;
}
