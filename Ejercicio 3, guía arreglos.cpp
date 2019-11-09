#include <iostream>
using namespace std;

float total;
int main(){
    int promedio;
    float acum;
    
    cout<<"Ingrese cuantas veces ingresara un dato: ";
    cin>>promedio;
    
    float arreglo[promedio];
    
    cout<<"Ingrese los datos dentro del arreglo"<<endl;
    for (int i=0; i<promedio; i++){ 
        cin>>arreglo[i];
        acum= acum+arreglo[i];
    }
    
    for (int i=0; i<promedio; i++){ 
        cout<<arreglo[i]<<"|";
    }
    
    total= acum/promedio;
    cout<<"\nEl promedio es: "<<total<<endl;
    
}


