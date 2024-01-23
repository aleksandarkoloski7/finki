/* Од стандарден влез се чита четирицифрен број. Да се испечати 1 доколку цифрите во бројот се во строго растечки редослед, во спротивно да се испечати 0.
For example:
Input	Result
1234
1 */
#include<iostream>
using namespace std;
int main()
{
  int n,c1,c2,c3,c4;
  cin>>n;
  c1 = n%10;
  c2 = n/10%10;
  c3 = n/100%10;
  c4 = n/1000;
  if(c4<c3 && c3 < c2 && c2<c1){
      cout<<1;
  }
  else{
      cout<<0;
}
return 0;
}
