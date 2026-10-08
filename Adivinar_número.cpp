#include <iostream>
using namespace std;

int main() {
    int secreto = 42;   
    int intento;
    int contador = 0;   

    
    do {
        cout << "Intento: ";
        cin >> intento;
        contador++;     

        if (intento < secreto) {
            cout << "Mayor" << endl;   
        } 
        else if (intento > secreto) {
            cout << "Menor" << endl;   
        }

    } while (intento != secreto);      

    // Cuando sale del ciclo, es porque acerto
    cout << "¡Correcto! Lo lograste en " << contador << " intentos." << endl;

    return 0;
}










