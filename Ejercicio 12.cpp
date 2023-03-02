/*Ejercicio 12. 
Escriba un programa que pida un número N e imprima todas las potencias desde N1 hasta N5.
Ej: si se ingresa 3 se debe imprimir:
3∧1=3
3∧2=9
3∧3=27
3∧4=81
3∧5=243*/

#include <iostream>

using namespace std;

int main()
{
    int N=0;
    int pwr=1;
    
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
    
    for (int aux=1; aux<=5;aux++){
        pwr=pwr*N;
        cout<<N<<'^'<<aux<<'='<<pwr<<endl;
    }
    
    return 0;
}