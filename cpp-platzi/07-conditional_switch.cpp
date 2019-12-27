#include <iostream>

int main()
{
    int Math = 0;
    int Biology = 0;

    std::cout << "Ingresa tú nota para Mátematicas: ";
    std::cin >> Math;
    std::cout << "Ingresa tú nota para Biología: ";
    std::cin >> Biology;

    switch (Math)
    {
    case 10:
        std::cout << "Pinche prron";
        break;
    default:
        std::cout << "Pinche prro";
    }

    return 0;
}