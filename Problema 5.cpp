/*Problema 7.
En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y 1. 
Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10*/

#include <iostream>

using namespace std;

int main()
{
    int a=1,b=1,c=0,n=0,sumPar=0;
    cout<<"Ingresar numero: ";
    cin>>n;
    
    while (b<=n){
        c=a+b;
        a=b;
        b=c;
        
        if (b%2==0){
            if (b<n){
                sumPar+=b;
            }
        }
    }
    cout<<"el resultado de la suma es: "<<sumPar;
    return 0;
}