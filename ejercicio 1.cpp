/*Ejercicio 1. 
Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2*/
#include <iostream>

using namespace std;

int main()
{
    int A=0;
    int B=0;
    int residuo=0;
    
    cout<<"Ingrese el numero A: "<<endl;
    cin>>A;
    
    cout<<"Ingrese el numero B: "<<endl;
    cin>>B;
    
    residuo=(A%B);
    
    cout<<"El residuo de la division "<<A<<'/'<<B<<" es: "<<residuo<<endl;

    return 0;
}