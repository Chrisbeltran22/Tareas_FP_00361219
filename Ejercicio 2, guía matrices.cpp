/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//comenzando ejercicio 2
#include <iostream>
using namespace std;
int filas, columnas;
int main(){
    cout<<"Ingrese el tamano de la matriz, en filas y columnas"<<endl;
    cin>>filas; cin>>columnas;
    int matriz[filas][columnas];
    cout<<"Ingrese los datos dentro de la matriz"<<endl;
    for (int i=0; i<filas; i++){ //controlar las filas
        for(int j=0; j<columnas; j++){ //controla las columnas
            cin>>matriz[i][j];
        }
    }
    
    for (int i=0; i<filas; i++){ //controlar las filas
        for(int j=0; j<columnas; j++){ //controla las columnas
            cout<<" "<<matriz[i][j]<<"|";
        }
    cout<<endl;
    }
}

