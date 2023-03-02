/*Ejercicio 13. 
Escriba un programa que pida un número N e imprima todos los divisores de N.
Ej: si se ingresa 4 se debe imprimir:
Los divisores de n son:
1
2
4*/

#include <iostream>

using namespace std;

int main()
{
    int N=0;
    
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
    
    cout<<"Los divisores de "<<N<<" son: "<<endl;
    
    for (int aux=1; aux<=N;aux++){
        if (N%aux==0){
            cout<<aux<<endl;
        }
    }
    
    return 0;
}