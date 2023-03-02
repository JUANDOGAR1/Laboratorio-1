/*Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).

Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2*/

#include <iostream>

using namespace std;

int main()
{
    int n=1;
    int suma=0;
    int prom=0;
    int cont=0;
    
    while (n!=0){
        cout<<"Ingrese un numero: "<<endl;
        cin>>n;
        suma=suma+n;
        cont++;
    }
    cont--;
    prom=(suma/cont);
    cout<<"El resultadod de le sumatoria es: "<<prom<<endl;

    return 0;
}