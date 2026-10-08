#include <iostream>
using namespace std;

bool esCapicua(int n) {
    if (n < 0) return false; // No aplica para el rango, pero por si acaso

    int original = n;
    int invertido = 0;

    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }

    return original == invertido;
}

int main() {
    int n;
    cout << "Ingrese n (1 <= n <= 10^9): ";
    cin >> n;

    if (n < 1 || n > 1000000000) {
        cout << "Numero fuera de rango" << endl;
        return 0;
    }

    if (esCapicua(n)) {
        cout << n << " es capicua" << endl;
    } else {
        cout << n << " no es capicua" << endl;
    }

    return 0;
}
