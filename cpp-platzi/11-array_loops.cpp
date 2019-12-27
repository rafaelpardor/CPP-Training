#include <iostream>

int main()
{
    int IDs[5][5]=
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            std::cout << IDs[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}