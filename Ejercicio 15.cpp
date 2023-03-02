/*Ejercicio 15. 
Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6*/

#include <iostream>

using namespace std;

int main()
{
    int n=1;
    int suma=0;
    
    while (n!=0){
        cout<<"Ingrese un numero: "<<endl;
        cin>>n;
        suma=suma+n;
    }
    cout<<"El resultado de le sumatoria es: "<<suma<<endl;
    
    return 0;
}
