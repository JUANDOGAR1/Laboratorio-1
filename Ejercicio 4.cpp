/*Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3*/

#include <iostream>

using namespace std;

int main()
{
    int A=0;
    int B=0;
    
    cout<<"Ingrese el valor de A: "<<endl;
    cin>>A;
    cout<<"Ingrese el valor de B: "<<endl;
    cin>>B;
    
    if (A<B){
        cout<<"El menor es "<<A<<endl;
    }
    else{
        cout<<"El menor es "<<B<<endl;
    }
    
    return 0;
}