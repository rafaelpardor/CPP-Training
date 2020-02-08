#include <iostream>

int main()
{
    int numb1 = 20;
    int* apuntadorNumb1 = &numb1;
    *apuntadorNumb1 = 1;

    std::cout << numb1 << std::endl;
    std::cout << &numb1 << std::endl;
    std::cout << apuntadorNumb1 << std::endl;


    return 0;
}