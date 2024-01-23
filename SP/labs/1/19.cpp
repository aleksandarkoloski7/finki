/* Да се напише програма во која се внесуваат три цели броеви. Доколку внесените броеви се во растечки редослед да се испечати 1, a доколку се во опаѓачки редослед да се испечати -1, во спротивно да се испечати 0.
For example:
Input	Result
10 15 20
1
100 10 1
-1
 */
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c && b>c)
    cout<<-1;
    else if(a<b && b==c)
    cout<<0;
    else if(a<b && a<c && b>a)
    cout<<1;
    return 0;
}
