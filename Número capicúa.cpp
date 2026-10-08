#include <iostream>
using namespace std;

int main() {
    int n, original, invertido = 0, digito;

    cout << "Ingrese un numero (1 <= n <= 1000000000): ";
    cin >> n;

    // Validamos el rango
    if (n < 1 || n > 1000000000) {
        cout << "Numero fuera de rango" << endl;
        return 0;
    }

    original = n;   // guardamos el numero original

    // Vamos sacando los digitos y armando el numero al reves
    while (n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }

    // Comparamos el original con el invertido
    if (original == invertido) {
        cout << "El numero es capicua" << endl;
    } else {
        cout << "El numero no es capicua" << endl;
    }

    return 0;
}
