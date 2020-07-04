#include <iostream>

void incrementByRef(int &val)
{
    val++;
}

int main()
{
    int i = 10;
    std::cout << "Value of i: " << i << std::endl;
    incrementByRef(i);
    std::cout << "Value of i: " << i << std::endl;
    return 0;
}
