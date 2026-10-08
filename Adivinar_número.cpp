#include <iostream>
using namespace std;

int main() {
    int secreto = 42;   // El numero secreto
    int intento;
    int contador = 0;   // Para contar los intentos

    // Usamos do-while para pedir al menos un intento siempre
    do {
        cout << "Intento: ";
        cin >> intento;
        contador++;     // Sumamos 1 al contador cada vez que intenta

        if (intento < secreto) {
            cout << "Mayor" << endl;   // Si el intento es menor, el secreto es mayor
        } 
        else if (intento > secreto) {
            cout << "Menor" << endl;   // Si el intento es mayor, el secreto es menor
        }

    } while (intento != secreto);      // El ciclo se repite hasta acertar

    // Cuando sale del ciclo, es porque acerto
    cout << "¡Correcto! Lo lograste en " << contador << " intentos." << endl;

    return 0;
}










