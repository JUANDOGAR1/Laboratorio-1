/*Problema 3. 
Escriba un programa que debe leer un mes y un día de dicho mes para luego decir 
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero,
en dicho caso imprimir posiblemente año bisiesto.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto.*/

#include <iostream>

using namespace std;

int main()
{
    int mes=0;
    int dia=0;
    
    cout<<"Ingrese el numero del mes: "<<endl;
    cin>>mes;
    
    if (mes==0 or mes>12){
        cout<<mes<<" es un mes invalido."<<endl;
    }
    else if (mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12){
        cout<<"Ingrese el numero del dia: "<<endl;
        cin>>dia;
    
        if (dia>31){
            cout<<dia<<'/'<<mes<<" es una fecha invalida."<<endl;
        }
        else{
            cout<<dia<<'/'<<mes<<" es una fecha valida."<<endl;
        }
    }
    else if (mes!=2){ 
        cout<<"Ingrese el numero del dia: "<<endl;
        cin>>dia;
    
        if (dia>30){
            cout<<dia<<'/'<<mes<<" es una fecha invalida."<<endl;
        }
        else{
            cout<<dia<<'/'<<mes<<" es una fecha valida."<<endl;
        }
    }
    else{
        cout<<"Ingrese el numero del dia: "<<endl;
        cin>>dia;
    
        if (dia>29){
            cout<<dia<<'/'<<mes<<" es una fecha invalida."<<endl;
        }
        else if(dia==29){
            cout<<dia<<'/'<<mes<<" es valido en bisiesto."<<endl;
        }
        else{
            cout<<dia<<'/'<<mes<<" es una fecha valida."<<endl;
        }
    }
    return 0;
}