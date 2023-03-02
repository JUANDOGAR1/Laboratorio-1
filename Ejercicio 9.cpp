/*Ejercicio 9. 
Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
Ej: si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416*/
#include <iostream>

using namespace std;

int main()
{
    int N=0;
    float P=0;
    float A=0;
    float pi=3.1416;
    
    cout<<"Ingrese el valor de N: "<<endl;
    cin>>N;
    
    P=2*pi*N;
    A=pi*N*N;
    
    cout<<"Perimetro: "<<P<<endl;
    cout<<"Area: "<<A<<endl;
    
    return 0;
}