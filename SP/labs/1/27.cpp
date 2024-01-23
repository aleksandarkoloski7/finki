/* Од стандарден влез се вчитува даден број n, а потоа се вчитуваат n трицифрени броеви. Ваша задача е да го најдете најголемиот број чиј збир на неговите цифри треба да е парен број.
For example:
Input	Result
4
999
122
900
170
170 */
#include<iostream>
using namespace std;
int main() {
    int n, cifri, najgolem = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int broj;
        cin >> broj;
        int c1 = broj % 10;
        int c2 = (broj / 10) % 10;
        int c3 = broj / 100;
        cifri = c1 + c2 + c3;
        if (cifri % 2 == 0) {
            najgolem = max(najgolem, broj);
        }
    }
    if (najgolem == 0) {
        cout<<"NE";
    } else {
        cout << najgolem << endl;
    }
    return 0;
}
