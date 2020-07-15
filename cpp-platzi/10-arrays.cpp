#include <iostream>

int main()
{
    int index = 0;
    std::cout << "ingresa un numero enre el 0 y el 4. " << std::endl;
    std::cin >> index;

    std::string names[5] = {"Rafael", "Harry Potter", "Voldemort", "Alejandro"};
    std::string currentName = names[index];

    std::cout << currentName << std::endl;

    return 0;
}