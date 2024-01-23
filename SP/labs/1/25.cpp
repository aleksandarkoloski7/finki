/* Да се напише програма која ќе го одреди резултатот на студентот по еден предмет. Програмата треба да ги изврши следниве задачи:
Програмата бара внес на следниве податоци од студентот:
Поени на испитот (цел број од 0 до 100).
Присуство на студентот (број на часови посетени во однос на вкупниот број на часови во курсот).
Проверете дали внесените податоци се валидни. Поените од испитот треба да бидат во опсегот од 0 до 100, а присуството на часови треба да биде позитивен  број.
Вашата задача е да го пресметате резултатот на студентот со следниве критериуми:
Ако бројот на поени на испитот е поголем или еднаков на 60 и присуството е 80% или повеќе од часовите, студентот добива  "Odlichna ocenka."
Ако бројот на поени на испитот е поголем или еднаков на 50 и присуството е 70% или повеќе од часовите, студентот добива  "Zadovolitelna ocenka."
Во сите други случаи, студентот добива оценка "Prosechen rezultat."
Прикажете го на екран резултатот на студентот (неговата оценка). 
Input	
60 0.9
Odlichna ocenka
52 0.8
Zadovolitelna ocenka
50 -1
Nevalidni vlezni podatoci
102 0.9
Nevalidni vlezni podatoci */
#include <iostream>
using namespace std;
int main(){
    int poeni;
    float prisustvo;
    cin >> poeni >> prisustvo;
    if ( ( poeni < 1 || poeni > 100 ) || ( prisustvo < 0 ) ){
        cout << "Nevalidni vlezni podatoci" << endl;
    }
    else {
        if ( poeni >= 60 && prisustvo*100 >= 80 ){
            cout << "Odlichna ocenka" << endl;
        }
        else if ( poeni == 59 && prisustvo*100>=70)
        {
            cout<<"Prosechen rezultat"<<endl;
        }
        else if ( poeni >= 50 && prisustvo*100 >= 70 ){
            cout << "Zadovolitelna ocenka" << endl;
        }
        else {
            cout << "Prosechen rezultat" << endl;
        }
    }
    return 0;
}
