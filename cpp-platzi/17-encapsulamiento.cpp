#include <iostream>

class Dog
{
private:
    std::string Name;

public:
    std::string sizeDog;

    Dog(std::string name, std::string size)
    {
        Name = name;
        sizeDog = size;
    }
    std::string GetName()
    {
        return Name;
    }
    void SetName(std::string newName)
    {
        Name = newName;
    }
};

int main(int argc, char const *argv[])
{
    Dog luna("Luna", "Pequena");
    std::cout << luna.GetName() << std::endl;
    return 0;
}
