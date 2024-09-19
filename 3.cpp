/*¿Cuál es el factor primo más grande del número? 600851475143*/

#include <iostream>
using namespace std;

int main(){

    long long val=600851475143;
    int nummayor=0;

    for(long i=2;val>1;i+=1){ //elimina los multiplos 2-3-4..

        while(val%i==0){  //si val se divide es primo
            cout<<i<<",";
            nummayor=i;
            val/=i;
        }
    }
    cout<<"\nel numero mayor es: "<<nummayor;



}