#include <iostream>

using namespace std;
int main(){

 cout<<"Bienvenido a Facebook\n Lastimosamente no se pudo iniciar su sesión";
 cout<<endl<<"Si desea saber cuales son los errores presentes seleccione:\n 1\n 2\n 3\n 4\n 5\n";
 int n = 5; //Se inicializa n a 0
 cin>>n;
 
 switch(n){ //Si n toma un valor de alguno de los casos de 1 a 4, se mostrará el mensaje correspondiente
     case 1:
     cout<<"Error de credenciales\n";
     break;
     
     case 2: 
     cout<<"Error de credenciales\n";
     break;
     
     case 3: 
     cout<<"Error de credenciales\n";
     break;
     
     case 4: 
     cout<<"Su conexión no es la adecuada\n";
     break;
     
     default: 
     cout<<"Lastimosamente su cuenta no existe";
     
 }
 
 
 return 0;
}
