/*Ejercicio 14.
Escriba un programa que imprima dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1.
Ej: las primeras lineas a imprimir serían:
1 50
2 49
3 48*/

#include <iostream>

using namespace std;

int main()
{
    int C1=1;
    int C2=50;
    
    for (int aux=1;aux<=50;aux++){
        cout<<C1<<' '<<C2<<endl;
        C1++;
        C2--;
    }
    
    return 0;
}