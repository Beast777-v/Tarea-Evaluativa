#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0)); //semilla 
    long aletorio = rand()%101;

    cout << "Hora de adivinar un numero entre 0 y 100" << endl;

    int num =200;
    int i=0;
    
    while (num!=aletorio)
    {
        cin >> num;

        if (num<aletorio)
        {
            cout << "Es mayor" << endl;
        }else if(num>aletorio){

            cout << "Es menor" << endl;
        }
        
        i++;

    }
    
    cout << "Corrrecto! Lo lograste en "<< i << " intentos";









}
