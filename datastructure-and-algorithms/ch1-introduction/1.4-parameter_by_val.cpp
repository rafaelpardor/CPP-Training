#include <iostream>

void incrementByVal(int val)
{
    val++;
}

int main()
{
    int i = 10;
    std::cout << "Value of: " << i << std::endl;
    incrementByVal(i);
    std::cout << "Value of: " << i << std::endl;
    return 0;
}
