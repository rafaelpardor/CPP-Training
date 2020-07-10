#include <iostream>

int main()
{
    int Math = 0;
    int Biology = 0;

    std::cout << "Ingresa tú nota para Mátematicas: ";
    std::cin >> Math;

    if (Math > 7)
    {
        std::cout << "Pasaste" << std::endl;
    }
    else
    {
        std::cout << "No pasaste" << std::endl;
    }

    return 0;
}