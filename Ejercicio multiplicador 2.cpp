#include <iostream>

int main (){
    std::cout<<"Programa restador \n";
    int num1; int num2, num3, num4; int resultado;
    std::cout<<"Ingrese el primer número \n";
    std::cin>> num1;
    std::cout<<"Ingrese el segundo número \n";
    std::cin>> num2;
    std::cout<<"Ingrese el tercer número \n";
    std::cin>> num3;
    std::cout<<"Ingrese el cuarto número \n";
    std::cin>> num4;
    resultado = num1 * num2 * num3 * num4;
    std::cout<<resultado<<"\n";
    return 0;
}
