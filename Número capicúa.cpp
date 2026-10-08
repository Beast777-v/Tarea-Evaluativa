#include <iostream>

using namespace std;

int main() {

    long long n;
    cout<<"Ingrese un numero para comprobar si es capicúa";
    cin >> n;
  if (n < 1 || n > 1e9) {
  cout << "Fuera de rango" <<endl;
 return 0;
  }
      long long original = n;
    long long invertido = 0;
    
    while (n > 0) {
        long long digito = n % 10; 
        invertido = invertido * 10 + digito;
        n /= 10;
    } 

    if (original == invertido) {
        cout << "Es capicua" << endl; 
    } else {
        cout << "No es capicua" << endl; 
    }

    return 0;
}

