/*Problema 7. 
Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 11 + 22 + 22 + 33 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.*/

#include <iostream>

using namespace std;

int main()
{
    int N=0,sum=0,expo=0;
    
    cout<<"Ingrese el numero: ";
    cin>>N;
    
    while (N>0){
        int aux=1;
        expo=N%10; 
        for (int i=1;i<=expo;i++){
            aux=aux*expo;
        }
        sum=sum+aux;
        N=N/10;
    }
    cout<<"El resultado de la suma es: "<<sum;
    
    return 0;
}