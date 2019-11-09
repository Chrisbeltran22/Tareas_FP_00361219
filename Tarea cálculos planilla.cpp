#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int tiempo; //Tiempo en que se le paga al usuario (semanal, quincenal , mensual)
float sueldo; //Salario base
int extras; //Salario horas extra
int horaextra; //Cantidad de horas extras
float salario; //Salario total de base + horas extra
float salariofinal; //Salario luego de todos los descuentos de planilla
float isss; //Descuento ISSS
float afp; //Descuento AFP
float renta; //Descuento Renta
float rentag; //Valor de Renta Gravada
float prestamo; //Descuento préstamos
float anticipo; //Descuento anticipo
	
/* Se harán tres procesos para determinar los valores justos según los estándares ya definidos del cálculo de los impuestos y otros
en una planilla en El Salvador, el cual se dará al defininir según lo que el usuario elija al momento de iniciar el programa
*/

int main(void){ 
cout<<"Por favor seleccione el rango de tiempo en el cual recibe su pago"<<endl;
cout<<"1- SEMANAL\n2- QUINCENAL\n3- MENSUAL"<<endl;
cin>>tiempo;
cout<<endl;

//INICIA PROCESO PARA CÁLCULO DE DATOS SEMANALES
	if(tiempo == 1){	
		cout<<"Ha seleccionado SEMANAL\nPor favor ingrese su sueldo semanal"<<endl;
		cin>>sueldo; 
		cout<<"Por favor ingrese el numero de horas extra que ha realizado\n(Cada hora tiene un valor de $3.00, sino ha realizado dijite 0)"<<endl;
		cin>>extras; 
		cout<<endl;
		cout<<"Por favor ingrese el monto de prestamo (Si no posee ingrese 0)"<<endl;
		cin>>prestamo; 
		cout<<"Usted ingresó: $"<<prestamo<<" en valor de prestamo"<<endl;
		cout<<endl;
		cout<<endl<<"Por favor ingrese el monto de anticipo (Si no posee ingrese 0)"<<endl;
		cin>>anticipo; 
		cout<<endl;
		cout<<"Usted ingreso: $"<<anticipo<<" en valor de anticipo"<<endl;
				
		//Cálculo de horas extra
		horaextra= (extras*3); //Horas extra se calcula multiplicando el número de horas extra que tienes por el monto en dinero ($3.00 c/hora)
		cout<<endl;
		cout<<"El monto de horas extras es: $"<<horaextra<<endl;
		salario= sueldo + horaextra;
		cout<<endl;
				
			//Cálculo de ISSS
			if(salario>=1000){ 
				isss= (1000*3)/100; //Si el sueldo es mayor o igual a 1000, se multiplicará 1000 por el porcentaje definido de Isss
				cout<<"El valor de porcentaje del ISSS es: $"<<isss<<endl;
			}
				
			else{
				(salario<=1000);
				isss= (salario*3)/100; //Si el sueldo es menor o igual a 1000, se multiplicará el sueldo por el porcentaje definido del Isss
				cout<<"El valor de porcentaje del ISSS es: $"<<isss<<endl;
			}	
			cout<<endl;
				
			//Cálculo de AFP
			afp= ((salario*7.25)/100); //AFP es la multiplicación de tu salario (incluyendo horas extras) por el porcentaje ya establecido.
			cout<<"El valor de porcentaje de AFP es: $"<<afp<<endl;
				
			//Cálculo de Renta Gravada para encontrar valor de Descuento de Renta
			rentag=salario-isss-afp;
				
			if(rentag>=0){ //Los valores de cálculo de renta ya son determinados, solo se modifican según el rango y monto de la renta gravada que el usuario posee.
				if(rentag<=118.00){
					renta= 0+ (((rentag - 0)*0)/100);
					cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
				}
			}
				  
			if(rentag>=118.01){
				if(rentag<=223.81){
				    renta= 4.42+ (((rentag - 118.01)*10)/100);
				 	cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
				}
			}
				
			if(rentag>=223.82){
			 	if(rentag<=509.81){
				 	 renta= 15.00+ (((rentag - 223.82)*20)/100);
				 	 cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
			 	}
	     	} 
				
			if(rentag>=509.53){
				renta= 72.14+ (((rentag - 509.53)*30)/100);
			 	cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
			}
		salariofinal= (((salario-isss)-renta-afp)-prestamo-anticipo);	
		cout<<endl<<"Su sueldo es: $"<<salariofinal<<endl;	 
	} 
	 
//INICIA PROCESO PARA CÁLCULO DE DATOS QUINCENALES	
		if(tiempo == 2){
			cout<<"Ha seleccionado QUINCENAL\nPor favor ingrese su sueldo quincenal"<<endl;
			cin>>sueldo; 
			cout<<"Por favor ingrese el numero de horas extra que ha realizado\n(Cada hora tiene un valor de $3.00, sino ha realizado dijite 0)"<<endl;
			cin>>extras; 
			cout<<endl;
			cout<<"Por favor ingrese el monto de prestamo (Si no posee ingrese 0)"<<endl;
			cin>>prestamo; 
			cout<<endl;
			cout<<"Usted ingreso: $"<<prestamo<<" en valor de prestamo"<<endl;
			cout<<endl;
			cout<<"Por favor ingrese el monto de anticipo (Si no posee ingrese 0)"<<endl;
			cin>>anticipo; 
			cout<<endl;
			cout<<"Usted ingreso: $"<<anticipo<<" en valor de anticipo"<<endl;
			
			//Cálculo de horas extra
			horaextra= (extras*3); //Horas extra se calcula multiplicando el número de horas extra que tienes por el monto en dinero ($3.00 c/hora)
			cout<<endl;
			cout<<"El monto de horas extras es: $"<<horaextra<<endl;
			salario= sueldo + horaextra;
			cout<<endl;
				
			//Cálculo de ISSS
			if(salario>=1000){ 
				isss= (1000*3)/100; //Si el sueldo es mayor o igual a 1000, se multiplicará 1000 por el porcentaje definido de Isss
				cout<<"El valor de porcentaje del ISSS es: $"<<isss<<endl;
			}
				
			else{
				(salario<=1000);
				isss= (salario*3)/100; //Si el sueldo es menor o igual a 1000, se multiplicará el sueldo por el porcentaje definido del Isss
				cout<<"El valor de porcentaje del ISSS es: $"<<isss<<endl;
			}	
			cout<<endl;
				
			//Cálculo de AFP
			afp= ((salario*7.25)/100); //AFP es la multiplicación de tu salario (incluyendo horas extras) por el porcentaje ya establecido.
			cout<<"El valor de porcentaje de AFP es: $"<<afp<<endl;
				
			//Cálculo de Renta Gravada para encontrar valor de Descuento de Renta
			rentag=salario-isss-afp;
				
			if(rentag>=0){ //Los valores de cálculo de renta ya son determinados, solo se modifican según el rango y monto de la renta gravada que el usuario posee.
				if(rentag<=236.00){
					renta= 0+ (((rentag - 0)*0)/100);
					cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
				}
			}
				
			if(rentag>=236.01){
				if(rentag<=447.62){
				    renta= 8.83+ (((rentag - 236.01)*10)/100);
				 	cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
				}
			}
				
			if(rentag>=447.62){
			 	if(rentag<=1019.05){
				 	 renta= 30.00+ (((rentag - 447.62)*20)/100);
				 	 cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
			 	}
			} 
				
			if(rentag>=1019.06){
				renta= 144.28+ (((rentag - 1019.62)*30)/100);
			 	cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
			}	 
			
			salariofinal= (((salario-isss)-renta-afp)-prestamo-anticipo);	
			cout<<endl<<"Su sueldo es: $"<<salariofinal<<endl;	
		}
//INICIA PROCESO PARA CÁLCULO DE DATOS MENSUALES			
			if(tiempo == 3){
				cout<<"Ha seleccionado MENSUAL\nPor favor ingrese su sueldo mensual"<<endl;
				cin>>sueldo; 
				cout<<"Por favor ingrese el numero de horas extra que ha realizado\n(Cada hora tiene un valor de $3.00, sino ha realizado dijite 0)"<<endl;
				cin>>extras; 
				cout<<endl;
				cout<<"Por favor ingrese el monto de prestamo (Si no posee ingrese 0)"<<endl;
				cin>>prestamo; 
				cout<<endl; 
				cout<<"Usted ingreso: $"<<prestamo<<" en valor de prestamo"<<endl;
				cout<<endl;
				cout<<"Por favor ingrese el monto de anticipo (Si no posee ingrese 0)"<<endl;
				cin>>anticipo; 
				cout<<endl;
				cout<<"Usted ingreso: $"<<anticipo<<" en valor de anticipo"<<endl;
		
				//Cálculo de horas extra
				horaextra= (extras*3); //Horas extra se calcula multiplicando el número de horas extra que tienes por el monto en dinero ($3.00 c/hora)
				cout<<endl;
				cout<<"El monto de horas extras es: $"<<horaextra<<endl;
				salario= sueldo + horaextra;
				cout<<endl;
				
				//Cálculo de ISSS
				if(salario>=1000){ 
					isss= (1000*3)/100; //Si el sueldo es mayor o igual a 1000, se multiplicará 1000 por el porcentaje definido de Isss
					cout<<"El valor de porcentaje del ISSS es: $"<<isss<<endl;
				}
				
				else{
					(salario<=1000);
					isss= (salario*3)/100; //Si el sueldo es menor o igual a 1000, se multiplicará el sueldo por el porcentaje definido del Isss
					cout<<"El valor de porcentaje del ISSS es: $"<<isss<<endl;
				}	
				cout<<endl;
				
				//Cálculo de AFP
				afp= ((salario*7.25)/100); //AFP es la multiplicación de tu salario (incluyendo horas extras) por el porcentaje ya establecido.
				cout<<"El valor de porcentaje de AFP es: $"<<afp<<endl;
				
				//Cálculo de Renta Gravada para encontrar valor de Descuento de Renta
				rentag=salario-isss-afp;
				
				if(rentag>=0){ //Los valores de cálculo de renta ya son determinados, solo se modifican según el rango y monto de la renta gravada que el usuario posee.
					if(rentag<=472.00){
						renta= 0+ (((rentag - 0)*0)/100);
						cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
					}
				}
				
				if(rentag>=472.01){
					if(rentag<=895.24){
				    	renta= 17.67+ (((rentag - 472.01)*10)/100);
				 		cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
					}
				}
				
				if(rentag>=895.25){
				 	if(rentag<=2038.10){
				 	 	renta= 60.00+ (((rentag - 895.25)*20)/100);
				 	 	cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
				 	}
				 } 
				
				if(rentag>=2083.11){
					renta= 288.57+ (((rentag - 2038.11)*30)/100);
				 	cout<<endl<<"El valor de porcentaje de Renta es: $"<<renta<<endl;
				}	 
				cout<<endl;
				salariofinal= (((salario-isss)-renta-afp)-prestamo-anticipo);	
				cout<<endl<<"Su sueldo es: $"<<salariofinal<<endl;	
			}
	cout<<endl;			
	cout<<"Fin del proceso\nGracias por utilizar nuestros servicios";
}
