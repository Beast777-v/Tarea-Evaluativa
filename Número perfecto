#include <iostream>
using namespace std;

bool esPerfecto(int n) {
    if (n <= 1) return false;

    int suma = 1; // El 1 siempre es divisor propio para n > 1

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            suma += i;
            if (i != n / i) {
                suma += n / i;
            }
        }
    }

    return suma == n;
}

int main() {
    int n;
    cout << "Ingrese n (1 <= n <= 100000): ";
    cin >> n;

    if (n < 1 || n > 100000) {
        cout << "Numero fuera de rango" << endl;
        return 0;
    }

    if (esPerfecto(n)) {
        cout << n << " es un numero perfecto" << endl;
    } else {
        cout << n << " no es un numero perfecto" << endl;
    }

    return 0;
}
