/* Да се напише програма во која што се внесува еден четирицифрен и еден трицифрен број. Да се отпечати 1 доколку сумата на цифрите на првиот број е поголема од сумата на цифрите на вториот број, во спротивно 0. 
For example:
Input	Result
3421 598
0
*/
#include<iostream>
using namespace std;
int main()
{
  int a,b,sumacifria,sumacifrib;
  cin>>a>>b;
  int ca1,ca2,ca3,ca4,bb1,bb2,bb3;
  ca1=a/1000;
  ca2=a/100%10;
  ca3=a/10%10;
  ca4=a%10;
  bb1=b/100;
  bb2=b/10%10;
  bb3=b%10;
  sumacifria=ca1+ca2+ca3+ca4;
  sumacifrib=bb1+bb2+bb3;
  if(sumacifria>sumacifrib){
      cout<<1;
  }
  else{
      cout<<0;
  }
return 0;
}
