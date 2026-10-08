#include <iostream>
using namespace std;

int main(){

    //321

    long long num, inv=0;
    cout << "Introduce un numero para invertirlo" << endl;
    cin >> num;

    int signo=1;

    if(num<0){
                                                                                               
        signo=-1;
        num*=signo;

    }

    while (num>0)
    {
        int digito = num%10;
        inv = inv *10 + digito;
        num/=10;
    } 
    
    cout << "el numero invertido es " << inv;


     return 0;




    
}
