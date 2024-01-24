/* Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. 
Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). 
Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. 
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
For example:
Input	
5
Brojot ne e validen */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=9)
    {
        cout<<"Brojot ne e validen"<<endl;
    }
    else
    {
        while(n>9)
        {
            n--;
            int brojac=0;
            int prevrten=0;
            int pomosenbr= n;
            while(pomosenbr!=0)
            {
                int cifra = pomosenbr%10;
                prevrten = prevrten * 10 + cifra;
                pomosenbr = pomosenbr/10;
                brojac++;
            }
            if(prevrten%brojac==0)
            {
                cout<<n<<endl;
                break;
            }
        }
    }
    return 0;
}
