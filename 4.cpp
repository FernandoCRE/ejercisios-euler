/*Encuentra el palíndromo más grande formado a partir del producto de dos
números de 3 dígitos.*/

#include <iostream>
using namespace std;

int main() {
    int palgrande = 0;


    for (int i = 100; i < 1000; i+=1) {
        for (int j = i; j < 1000; j+=1) {
            int multiplicacion = i * j;
            int num = multiplicacion;


            int invertido = 0;
            while (num > 0) {
                invertido = invertido * 10 + num % 10;
                num /= 10;
            }

            
            if (multiplicacion == invertido && multiplicacion > palgrande) {
                palgrande = multiplicacion;

                
            }
        }
    }

    cout << "palindromo mayor es: " << palgrande << endl;

    
}
