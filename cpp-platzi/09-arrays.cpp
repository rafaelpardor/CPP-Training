#include <iostream>

int main()
{
    int index = 0;
    std::cin>>index;

    std::string names[5] = {"Rafael", "Valentina", "Harry Potter", "Voldemort"};
    std::string currentName = names[index];

    std::cout << currentName << std::endl;

    return 0;
}