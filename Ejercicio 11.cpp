/*Ejercicio 11.
Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.
Ej: si se ingresa 7 se debe imprimir:
1x7=7
2x7=14
3x7=21
4x7=28
5x7=35
6x7=42
7x7=49
8x7=56
9x7=63
10x7=70*/

#include <iostream>

using namespace std;

int main()
{
    int N=0;
    int multiplo=0;
    
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
    
    for (int aux=1;aux<=10;aux++){
        multiplo=N*aux;
        cout<<aux<<'x'<<N<<'='<<multiplo<<endl;
    }
    
    return 0;
}