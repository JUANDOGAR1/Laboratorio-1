/*Ejercicio 8. 
Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120*/
#include <iostream>

using namespace std;

int main()
{
    int N=0;
    double factorial=1;
    
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
    
    for (int aux=1; aux<=N;aux++){
        factorial=factorial*aux;
    }
    cout<<N<<"! = "<<factorial<<endl;
    return 0;
}