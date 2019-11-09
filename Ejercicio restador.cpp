#include <iostream>

int main (){
    std::cout<<"Programa restador \n";
    int num1; int num2; int resultado;
    std::cout<<"Ingrese el primer número \n";
    std::cin>> num1;
    std::cout<<"Ingrese el segundo número \n";
    std::cin>> num2;
    resultado = num1 - num2;
    std::cout<<resultado<<"\n";
    return 0;
}
