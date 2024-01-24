/*Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). 
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.
For example:
Input	Result
99 500
200
*/
#include<iostream>
using namespace std;
int main() {
    int m,n,broj;
    int flag=0;
    cin>>m>>n;
    for(int i=m; i<=n; i++){
        broj=i;
        while(broj>0){
            int cifra = broj%10;
            if(cifra%2!=0){
                flag=0;
                break;}
            flag=1;
            broj/=10;
            }
        if (flag==1){
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"NE";
    }
    return 0;
}
