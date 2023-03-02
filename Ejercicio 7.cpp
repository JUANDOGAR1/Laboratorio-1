/*Ejercicio 7. 
Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15*/
#include <iostream>

using namespace std;

int main()
{
    int N=0;
    int suma=0;
    
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
    
    for (int aux=1; aux<=N;aux++){
        suma=suma+aux;
    }
    cout<<"La sumatoria desde 0 hasta "<<N<<" es: "<<suma<<endl;
    return 0;
}