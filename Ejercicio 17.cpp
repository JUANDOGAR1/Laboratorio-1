/*Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados.

Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El numero mayor fue: 3*/

#include <iostream>

using namespace std;

int main()
{
    int n=1;
    int mayor=0;
    
    while (n!=0){
        cout<<"Ingrese un numero: "<<endl;
        cin>>n;
        if (n>mayor){
            mayor=n;
        }
    }
    cout<<"El mayor fue: "<<mayor<<endl;

    return 0;
}