/*Problema 13. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
se genera una espiral de números como la siguiente:
21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13
En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
de una espiral de nxn.
Nota: la salida del programa debe ser:
En una espiral de 5x5, la suma es: 101.
Otra nota: se le dará una bonicación si imprime la espiral.*/

#include <iostream>

using namespace std;

int main()
{
    
    int n=0,cont=1,espiral=1,a=1, b=2;
    
    cout<<"Ingrese un numero impar: ";
    cin>>n;
    
    
    for (;cont<n;cont=cont+2){
        for (int i=1;i<=4;i++){
            a = a+b; 
            espiral = espiral + a;
        }
        b = b+2;
    }    
    cout<<espiral;
    return 0;
}