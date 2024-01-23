Да се напише програма, за која на стандарден влез се внесуваат 3 броеви. Доколку броевите се сите исти или сите различни на излез да се испечати 1, во спротивно да се испечати 0.
For example:
Input	Result
7 9 7
0
8 9 10
1
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b && b==c && a==c) || (a!=b && b!=c && a!=c))
    cout<<1;
    else
    cout<<0;
    return 0;
}
