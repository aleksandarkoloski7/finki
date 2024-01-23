/*Да се напише програма во која се внесуваат три цели броеви. Да се отпечати 1 доколку сите 3 броеви се исти или доколку сите 3 броеви се различни. Во спротивно да се отпечати 0.
For example:
Input	
7 7 7
1
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && a==c)
    cout<<1;
    else if(a!=b && c!=a && c!=b)
    cout<<1;
    else
    cout<<0;
    return 0;
}

