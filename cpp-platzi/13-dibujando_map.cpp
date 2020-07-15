#include <iostream>

void DrawMap(int HeroPos, char GameMap[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (i != HeroPos)
        {
            std::cout << GameMap[i];
        }
        else
        {
            std::cout << 'H';
        }
    }
}

int main()
{
    int HeroPos = 1;
    bool isGameOver = false;
    char Input = ' ';
    char GameMap[5] = {'1', '1', '1', '1', '1'};

    while (isGameOver == false)
    {
        std::cin >> Input;
        if (Input == 'd')
        {
            HeroPos = HeroPos + 1;
        }
        else if (Input == 'i')
        {
            HeroPos = HeroPos - 1;
        }
        else if (Input == 'p')
        {
            isGameOver = true;
        }

        DrawMap(HeroPos, GameMap);
    }

    return 0;
}