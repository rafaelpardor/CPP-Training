#include <iostream>

void printHola()
{
    std::cout << "Hola" << std::endl;
}

bool isPlayerDead(int hp)
{
    if (hp <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int totalLife = 0;

    printHola();
    if (isPlayerDead(totalLife)){
        std::cout << "Game Over" << std::endl;

    }else{
        std::cout << "continua we " << std::endl;
    }

    return 0;
}