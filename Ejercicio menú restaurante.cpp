#include <iostream>

using namespace std;

int main() {
    int menu=6;
    
    
    while (menu != 0){ //Se inicializa que while funcionar� al ser diferente de 0
        cout<<endl<<"Seleccione que men� desea degustar"<<endl;
    cout<<"1- Desayunos"<<endl<<"2- Almuerzos"<<endl<<"3- Cenas"<<endl<<"4- Postres"<<endl<<"5- Antojos"<<endl<<"0- Terminar la orden\n";
    cin>>menu;
        
    if (menu == 1){ //Si menu se selecciona a 1, se despliega la opci�n Desayunos.
        cout<<endl<<"Las opciones de desayuno son: Pupas, Tamales, Desayuno Salvadore�o (Frijoles, Huevos y Queso) Todas con caf�.";
        cout<<endl<<"�Desea continuar con alg�n otro pedido?";
    }
    else if (menu == 2){ //Si menu se selecciona a 2, se despliega la opci�n Almuezos.
        cout<<endl<<"Las opciones de almuerzo son: Sopas (Gallina, Res, Pata), Carne asada (plato completo), Alitas, Chuncks.";
        cout<<endl<<"�Desea continuar con alg�n otro pedido?";
    }
    else if (menu == 3){ //Si menu se selecciona a 3, se despliega la opci�n Cenas.
        cout<<endl<<"Las opciones de cena son: Salmorejo de tomate rosa, espuma de huevo y arenque, Costilla �Duroc� lacada con miel y soja, Canel�n de Sepia y Gambas con salsa de tinta y emulsi�n de perejil con toque de ajo.";
        cout<<endl<<"�Desea continuar con alg�n otro pedido?";
        
    }  
    else if (menu == 4){ //Si menu se selecciona a 4, se despliega la opci�n Postres.
        cout<<endl<<"Las opciones de postres son: Vaca negra, Paleta de naranja, Milkshake, Vanilla Ice, 2-Pack, shuco (con y sin piquete).";
        cout<<endl<<"�Desea continuar con alg�n otro pedido?";
    }
    else if (menu == 5){ //Si menu se selecciona a 5, se despliega la opci�n Antojos.
        cout<<endl<<"Las opciones antojos son: Elote loco, empanadas (frijol y leche), canoas, Nuegados.";
        cout<<endl<<"�Desea continuar con alg�n otro pedido?";
    }
    
    
    else if (menu == 0){ //Si menu se selecciona a 0, se despliega la opci�n finalizaci�n.
      cout<<endl<<"Gracias por su preferencia, pase un feliz d�a.";
    }
}
}
