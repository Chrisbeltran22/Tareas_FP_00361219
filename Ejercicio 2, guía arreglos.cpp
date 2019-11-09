#include <iostream>
using namespace std;


int main(){
    int arreglo[5];
    cout<<"Ingrese los datos dentro del arreglo"<<endl;
    for (int i=0; i<5; i++){ 
        cin>>arreglo[i]; 
    }
    
    for (int i=0; i<5; i++){ 
        cout<<arreglo[i]<<"|";
    }
    
}


