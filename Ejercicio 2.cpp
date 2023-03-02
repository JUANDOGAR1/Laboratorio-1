/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    
    cout<<"Ingrese un numero: "<<endl;
    cin>>N;
    
    if (N%2==0){
        cout<<N<<" es un numero par";
    }
    else{
        cout<<N<<" es un numero impar";
    }
    
    return 0;
}