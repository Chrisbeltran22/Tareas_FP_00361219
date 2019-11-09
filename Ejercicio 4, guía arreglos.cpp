#include <iostream>
using namespace std;

int main(){
    int k;
    float acum;
    
    cout<<"Ingrese cuantas veces ingresara un dato: ";
    cin>>k;
    
    int arreglo[k];
    int arreglo2[k];
    
    cout<<"Ingrese los datos dentro del arreglo"<<endl;
    for (int i=0; i<k; i++){
        cin>>arreglo[i];
    }
    for(int j=0; j<k; j++){ 
        cin>>arreglo2[j];
    }
    cout<<endl;
    for (int i=0; i<k; i++){
        cout<<arreglo[i]<<"|";
    }
    cout<<endl;
    for(int j=0; j<k; j++){ 
        cout<<arreglo2[j]<<"|";
    }
    
}

