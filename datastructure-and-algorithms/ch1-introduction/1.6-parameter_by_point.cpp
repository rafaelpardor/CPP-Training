#include <iostream>

void incrementByPoint(int *ptr)
{
    (*ptr)++;
}

int main()
{
    int i = 10;
    std::cout << "Value of i: " << i << std::endl;
    incrementByPoint(&i);
    std::cout << "Value of i: " << i << std::endl;
}
