/*Ejercicio 10.
Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100.
Ej: si se ingresa 33 se debe imprimir:
Multiplos de “33” menores que 100:
33
66
99*/
#include <iostream>

using namespace std;

int main()
{
    int N=0;
    int multiplo=0;
    
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
    
    cout<<"Multiplos de "<<'"'<<N<<'"'<<" menores que 100:"<<endl;
    for (int aux=1;multiplo<=100;++aux){
        multiplo=N*aux;
        if ((multiplo>=0)&&(multiplo<=100)){
            cout<<multiplo<<endl;
        }
        
    }
    
    return 0;
}