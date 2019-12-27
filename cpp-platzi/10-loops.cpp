#include <iostream>

int main()
{
    // int counter = 0;

    // while (counter < 100)
    // {
    //     std::cout << counter << std::endl;
    //     counter++;
    // }

    // bool isHappy = true;
    // char input = ' ';
    // do
    // {
    //     std::cout << ":D" << std::endl;
    //     std::cout << "Sigues feliz????? (T/F)" << std::endl;
    //     std::cin >> input;

    //     if (input == 'F' || input == 'f')
    //     {
    //         isHappy = false;
    //         std::cout << ":c" << std::endl;
    //     }
    // } while (isHappy == true);

    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << "par: " << i << std::endl;
        }
        else
        {
            std::cout << "impar: " << i << std::endl;
        }
    }

    return 0;
}