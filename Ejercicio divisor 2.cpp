#include <iostream>

int main (){
    std::cout<<"Programa divisor \n";
    int num1, num3; int num2, num4; int resultado;
    std::cout<<"Ingrese el primer n�mero \n";
    std::cin>> num1;
    std::cout<<"Ingrese el segundo n�mero \n";
    std::cin>> num2;
    std::cout<<"Ingrese el tercer n�mero \n";
    std::cin>> num3;
    std::cout<<"Ingrese el cuarto n�mero \n";
    std::cin>> num4;
    resultado = num1 / num2 / num3 / num4;
    std::cout<<resultado<<"\n";
    return 0;
}
