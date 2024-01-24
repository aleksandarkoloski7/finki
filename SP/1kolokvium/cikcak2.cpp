#include <iostream>
using namespace std;
bool isCikcak(int n) {
    while (n >= 10) {
        int digit1 = n % 10;
        n /= 10;
        int digit2 = n % 10;
        if (!((digit1 < 5 && digit2 >= 5) || (digit1 >= 5 && digit2 < 5))) {
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    while (cin >> num) {
        if (num < 10) {
            continue;
        }
        if (!isCikcak(num)) {
            continue;
        }
        cout << num << endl;
    }
    return 0;
}
