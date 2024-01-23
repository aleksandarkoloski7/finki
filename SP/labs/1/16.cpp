/* Да се напише програма во која се внесуваат три броеви. Да се отпечати 1 доколку средниот број е истовремено поголем од двата останати броеви, или пак е истовремено помал. Во спротивно да се отпечати 0.
For example:
Input	Result
10 20 15
1
7 7 14
0 */
#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   if((b>c && b>a) || (b<c && b<a))
   cout<<1;
   else
   cout<<0;
   return 0;
}
