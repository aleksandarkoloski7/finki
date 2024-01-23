/*Од тастатура се читаат два цели броеви a, b. Да се испечатат сите парни броеви кои што се деливи со 7 и сите непарни броеви кои што не се деливи со 3 во опсег (а, b]. 
Ако вакви броеви не постојат да се испечати 0, а во спротивно да се испечати колкав процент од броевите ги исполнуваат условите(односно ќе бидат испечатени). */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int count = 0; 
    for (int i = a + 1; i <= b; ++i) {
        if ((i % 2 == 0) && (i % 7 == 0)) {
            cout << i << " "<<endl;
            count++;
        } else if ((i % 2 != 0) && (i % 3 != 0)) {
            cout << i << " "<<endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "0" << endl;
    } else {
        double procent = (static_cast<double>(count) / (b - a)) * 100;
        cout<<procent<<"%"<<endl;
    }
    return 0;
}
