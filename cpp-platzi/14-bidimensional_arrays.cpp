#include <iostream>

void DrawMap(int HeroPosX, int HeroPosY, char GameMap[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i < 5; i++)
        {
            if (i != HeroPosX)
            {
                std::cout << GameMap[i]
                          << std::endl;
            }
            else
            {
                std::cout << 'H';
            }
        }
    }
}

int main()
{
    int HeroPosX = 1;
    int HeroPosY = 1;
    bool isGameOver = false;
    char Input = ' ';
    char GameMap[5][5] =
        {
            {'1', '1', '1', '1', '1'},
            {'1', '1', '1', '1', '1'},
            {'1', '1', '1', '1', '1'},
            {'1', '1', '1', '1', '1'},
            {'1', '1', '1', '1', '1'}};

    DrawMap(HeroPosX, HeroPosY, GameMap);

    while (isGameOver == false)
    {
        std::cin >> Input;
        if (Input == 'd')
        {
            HeroPosX = HeroPosX + 1;
        }
        else if (Input == 'i')
        {
            HeroPosX = HeroPosX - 1;
        }
        else if (Input == 'p')
        {
            isGameOver = true;
        }
        DrawMap(HeroPosX, HeroPosY, GameMap);
    }

    return 0;
}