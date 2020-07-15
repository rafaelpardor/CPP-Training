#include <iostream>

void printHello()
{
    std::cout << "Hello..." << std::endl;
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

    printHello();
    if (isPlayerDead(totalLife))
    {
        std::cout << "Game Over" << std::endl;
    }
    else
    {
        std::cout << "Continue" << std::endl;
    }

    return 0;
}