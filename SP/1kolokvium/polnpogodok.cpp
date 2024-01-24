#include<iostream>
using namespace std;
int main()
{
    char a;
    int suma=0;
    while(cin>>a)
    {
        if(a=='.')
        {break;}
        else
        {
            if(a>='0' && a<='9')
            {
                suma=suma+(a-'0');
            }
            else if(a>='a' && a<='f')
            {
                suma=suma+(a-'a')+10;
            }
            else if(a>='A' && a<='F')
            {
                suma=suma+(a-'A')+10;
            }
        }
    }
    if (suma%16==0)
    {
        if (suma%100==16)
        {
            cout<<"Poln pogodok"<<endl;
        }
        else
        {
            cout<< "Pogodok"<<endl;
        }
    }
    else
    {
        cout<<suma<<endl;
    }
    return 0;
}
