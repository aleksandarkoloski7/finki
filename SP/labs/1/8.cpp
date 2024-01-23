/*Да се напише програма која ќе ги изведува основните математички операции (+, -, *, /, %) врз два броја кои се читаат од стандарден влез.
For example:
Input	Result
24 5
a + b = 29
a - b = 19
a * b = 120
a / b = 4
a % b = 4 */

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a+b)
    cout<<"a"<<" + "<<"b"<<" = "<<a+b<<endl;
    if(a-b)
    cout<<"a"<<" - "<<"b"<<" = "<<a-b<<endl;
    if(a*b)
    cout<<"a"<<" * "<<"b"<<" = "<<a*b<<endl;
    if(a/b || b/a)
    cout<<"a"<<" / "<<"b"<<" = "<<a/b<<endl;
    if(a%b || b%a)
    cout<<"a"<<" % "<<"b"<<" = "<<a%b<<endl;
    return 0;
}
