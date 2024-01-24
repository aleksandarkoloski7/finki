/* Од стандарден влез се читаат знаци се додека не се прочита извичник. 
Во вака внесениот текст се скриени цели броеви (помали од 100). 
Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
Напомена: cin во C++ ги игнорира празните места (space). За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)
For example:
Input	
ako34D neka12em bashka41mewr20!
107 */
#include<iostream>
using namespace std;
int main(){
    char c;
    int zbir=0;
    int broj=0;
    while(cin>>noskipws>>c){
        if(c>='0' && c<='9'){
            broj = broj*10 + (c - '0');
        }
        else{
            zbir+=broj;
            broj=0;
        }
        if(c=='!'){
            break;
        }
    }
    cout<<zbir;
    return 0;
}
