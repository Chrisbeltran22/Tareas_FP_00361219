#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
int n, i=0, j, factorial;
cout<<"Ingrese el número n";
 cin>>n;
    while(i<=n){ //Inicializa el proceso mientras para determinar factorial.
        
        if(i == 1){
            factorial = 1;}
        
        else{ 
            factorial = 1;
            j=1;
          
            while(j<=i){
                factorial *= j;
                j++;}}
            cout<<"factorial de "<<i<<";"<<factorial<<endl;
                i++;}
 	return 0;
    
}
