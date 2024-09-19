/*¿cual es el 10001
primer número primo?*/

#include <iostream> 
using namespace std; 

int main() {

    int verprimo = 0;   
    int contador = 1;  
    long val = 2;      

    
    while (contador <= 10001) {
        verprimo = 0;   
        
        for (int i = 2; i < val; i+=1) {
            
            if (val % i == 0) {
                verprimo = 1;  
                break;     
            }
        }

        
        if (verprimo == 0) {
            
            if (contador == 10001) {
                cout << val << endl;  
            }
            contador+=1;  
        }

        val+=1;  
    }

    
}
