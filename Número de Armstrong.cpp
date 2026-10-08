#include <iostream>
using namespace std;

int main() {
    for (int n = 100; n <= 999; n++) {
        int original = n, suma = 0;
        while (original > 0) {
            int d = original % 10;
            suma += d * d * d;
            original /= 10;
        }
        if (suma == n)
            cout << n << endl;
    }
    return 0;
}
