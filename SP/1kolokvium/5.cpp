/* Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
For example:
Input	
12345678 1357
PAREN */

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int flag=0;
    cin>>a>>b;
    if(a<=0 || b<=0){
        cout<<"Invalid input";
    }
    else{
        while(a>0)
        if(a/10%10==b%10){
            a/=100;
            b/=10;
            flag=1;
            cout<<"PAREN";
            break;
        }
        else if(b>a){
            int pom=b;
            a=pom;
            cout<<"PAREN";
            break;
        }
        else if(flag==0){
            cout<<"NE";
            break;
        }
    }
    return 0;
}