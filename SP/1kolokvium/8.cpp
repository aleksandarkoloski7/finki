/* Од стандарден влез се внесуваат два цели броја N и Х.
Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
Задачата да се реши без употреба на низи и матрици.
For example:
Input
88 7
86 */
#include<iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    for (int i = n - 1; i > 0; --i) {
        int tempN = i;
        int razlicen = 1;
        while (tempN > 0) {
            int digitN = tempN % 10;
            tempN /= 10;
            int tempX = x;
            while (tempX > 0) {
                int digitX = tempX % 10;
                tempX /= 10;
                if (digitN == digitX) {
                    razlicen = 0;
                    break;
                }
            }
            if (razlicen == 0) {
                break;
            }
        }
        if (razlicen == 1) {
            cout << i;
            return 0;
        }
    }
    cout << "0";
    return 0;
}
