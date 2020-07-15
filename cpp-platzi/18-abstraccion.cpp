#include <iostream>

class Human
{
private:
    int SocialLevel;
    int Inteligence;
    std::string GetThinkMSG()
    {
        if (SocialLevel > 100)
        {
            return "Estoy: feliz";
        }
        else if (SocialLevel >= 50)
        {
            return "Estoy: sad";
        }
        else
        {
            return "Modo suicide";
        }
    }

public:
    int age;
    Human(int SpawnAge)
    {
        age = SpawnAge;
    }
    void Think()
    {
        std::cout << GetThinkMSG() << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Human Rafael(22);
    Rafael.Think();
    return 0;
}
