/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int N;
int M;

int main(){
    int matriz[2][2];
    for (int i=0; i<2; i++){ //controlar las filas
        for(int j=0; j<2; j++){ //controla las columnas
            cin>>matriz[i][j];
        }
    }
    
    for (int i=0; i<2; i++){ //controlar las filas
        for(int j=0; j<2; j++){ //controla las columnas
            cout<<matriz[i][j]<<"|";
        }
    cout<<endl;
    }
}



