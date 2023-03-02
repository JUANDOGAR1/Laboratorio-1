/*Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7*/

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
    
    if (A>B){
        cout<<"El mayor es "<<A<<endl;
    }
    else{
        cout<<"El mayor es "<<B<<endl;
    }
    
    return 0;
}
