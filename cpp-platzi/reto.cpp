#include <iostream>

int main()
{
    int sitio = 0;

    std::cout << "¡Oh no!" << std::endl;
    std::cout << "Te desoiertas con un fuerte dolor de cabeza, al voltear a ver a tu alrededor te das cuenta que nada te resulta familiar, estás en un sucio cuarto desconocido, lo único que alcanzas a notar son: +" << std::endl;
    std::cout << "1) Una ventana" << std::endl;
    std::cout << "2) Un escusado" << std::endl;
    std::cout << "3) Un pato de hule" << std::endl;
    std::cout << "4) Una puerta" << std::endl;

    std::cout << "Inserta un número para decidir a cual sitio quieres ir: ";
    std::cin >> sitio;

    std::cout << "\n";

    switch (sitio)
    {
    case 3:
        std::cout << "Decides ir por el pato, al llegar junto a él lo tómas y este emopieza a hablarte y bueno ya te mueres y fin y game over" << std::endl;
        break;
    default:
        std::cout << "No pasa nada." << std::endl;
        break;
    }

    return 0;
}
