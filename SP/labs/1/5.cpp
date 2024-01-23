/* Да се напише програма со која корисникот на влез треба да внесе три позитивни броја, а на излез треба да се отпечати кој од броевите има најмала вредност. Доколку сите три броја имаат иста вредност треба да се отпечати порака дека станува збор за три исти броја. 
For example:
Input	Result
1
2
1
Najmala vrednost ima brojot 1
5
3
2
Najmala vrednost ima brojot 2
3
3
3
Site tri broja imaat ista vrednost
10
6
54 */
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b<=c)
        cout << "Najmala vrednost ima brojot " << b;
        else if (b > c && c <= a)
            cout << "Najmala vrednost ima brojot " << c;
        else if (c > a && c <= a)
            cout << "Najmala vrednost ima brojot" << a;
        else if (a == b & b == c & a == c)
            cout << "Site tri broja imaat ista vrednost";
return 0;
}

