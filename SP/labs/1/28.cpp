/* Да се напише програма што ќе ја испечати сумата на квадратите на сите парни броеви во интервалот [A,B). А и B се внесуваат од тастатура.
For example:
Input	
1 5
The sum is: 20
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b, suma = 0;
    cin >> a >> b;
    for (int i = a; i < b; i++) {
        if (i % 2 == 0) {
            suma += pow(i , 2);
        } else {
            continue;
        }
    }
    cout << "The sum is: " << suma << endl;
    return 0;
}
