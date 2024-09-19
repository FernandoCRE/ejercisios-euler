/*Considerando los términos de la secuencia de Fibonacci cuyos valores no superan los cuatro millones, 
encuentre la suma de los términos de valor par.*/

#include <iostream>
using namespace std;

int main() {
    long long num1 = 1;     
    long long num2 = 2;  
    long long num3 = 0;
    long long suma = 0;  

    while (num2 <= 4000000) {  
        if (num2 % 2 == 0) {
            suma += num2;  
        }
        
        num3 = num1 + num2;  
        num1 = num2;       
        num2 = num3;
    }

    cout << "suma total: "<< suma << endl;
    
}
