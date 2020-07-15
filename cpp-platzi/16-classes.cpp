#include <iostream>

class Cat
{
public:
    std::string Name;
    Cat()
    {
        Name = "Tornillo";
    }

    Cat(std::string nombre)
    {
        Name = nombre;
    }
    void Meow()
    {
        std::cout << "MEOW" << std::endl;
    }
};

int main()
{
    Cat kitty;
    Cat kitty1("Truerca");

    std::cout << kitty.Name << std::endl;
    kitty.Meow();
    std::cout << kitty1.Name << std::endl;
    return 0;
}
