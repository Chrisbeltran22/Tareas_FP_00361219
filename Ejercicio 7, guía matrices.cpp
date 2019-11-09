/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> 
using namespace std;
int filas, columnas;
int numero, calculo;
int main(){
    cout<<"Ingrese el tamano de la matriz, en filas y columnas"<<endl;
    cin>>filas; cin>>columnas;
    int matriz[filas][columnas];
    cout<<"Ingrese el numero a mutiplicar en la matriz"<<endl;
    cin>>numero;
    cout<<"Ingrese los datos dentro de la matriz"<<endl;
    for (int i=0; i<filas; i++){ //controlar las filas
        for(int j=0; j<columnas; j++){ //controla las columnas
            cin>>matriz[i][j];
        }
    }
    
    for (int i=0; i<filas; i++){ //controlar las filas
        for(int j=0; j<columnas; j++){ //controla las columnas
            calculo = matriz[i][j] / numero;
            cout<<" "<<calculo<<"|";
        }
    cout<<endl;
    }
}
