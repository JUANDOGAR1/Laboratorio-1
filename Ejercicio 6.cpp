/*Ejercicio 6.
Escriba un programa que pida dos números A y B e imprima en pantalla la potencia AB, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5∧3=125*/
#include <iostream>

using namespace std;

int main()
{
    int A=0;
    int B=0;
    int pwr=1;
    
    cout<<"Ingrese el valor de A: "<<endl;
    cin>>A;
    cout<<"Ingrese el valor de B: "<<endl;
    cin>>B;
    
    for (int aux=1; aux<=B;aux++){
        pwr=pwr*A;
    }
    cout<<A<<'^'<<B<<'='<<pwr<<endl;
    return 0;
}