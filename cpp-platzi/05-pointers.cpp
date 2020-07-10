#include <iostream>

int main()
{
    int numb1 = 20;
    std::cout << "Valor de la variable 1: " << numb1 << std::endl;
    std::cout << "- Lugar en memoria de la variable 1: " << &numb1 << std::endl;

    int *apuntadorNumb1 = &numb1;
    std::cout << "Valor de variable apuntador es igual a la variable 1: " << *apuntadorNumb1 << std::endl;
    std::cout << "Imprimiendo el valor en memoria de la variable apuntador y de la variable 1: " << apuntadorNumb1 << std::endl;
    std::cout << "Imprimiendo el valor en memoria de la variable apuntador: " << &apuntadorNumb1 << std::endl;

    // Si cambio el valor de la variable 1 cambia el valor
    // de la variable apuntador
    numb1 = 1;
    std::cout << "Valor de la variable: " << numb1 << std::endl;
    std::cout << "Lugar en memoria: " << *apuntadorNumb1 << std::endl;
    
    // si cambio el valor de la variable apuntador cambia el
    // valor de la variable 1
    *apuntadorNumb1 = 2;
    std::cout << "Valor de la variable: " << numb1 << std::endl;
    std::cout << "Lugar en memoria: " << *apuntadorNumb1 << std::endl;

    return 0;
}