/*Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
For example:
Input	
10
8 */

#include<iostream>
using namespace std;
int main(){
int n, zbir = 0,y, najgolem = 0;
cin>>n;
while(n!=0){
    n--;
    zbir=0;
for(int i=1; i<=n/2; i++){
    if(n%i==0){
        zbir+=i;
    }
}
    if(zbir>najgolem){
        najgolem = zbir;
        y = n;
    }
}
    cout<<y;
    return 0;
}
