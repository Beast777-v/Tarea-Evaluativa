
#include <iostream>
using namespace std;

int main(){

    //la secuencia para 6 es (3,10,5,16,8,4,2,1) ==> 8 pasos

    long n;
    cout << "Dame un numero mayor que 0" << endl;
    cin >> n;

    if (n<=0){

        cout << "Fuera de rango";
        return 1;

    }

    int i=0; //contador

    while (n>1)
    {
        if (n%2==0)
        {
            n/=2;

        }else
        {
            n=(n*3)+1;
        }

        i++;

    }
    
    cout << "Cantidad de pasos hasta llegar a 1 es: " << i;

     return 0;





}
