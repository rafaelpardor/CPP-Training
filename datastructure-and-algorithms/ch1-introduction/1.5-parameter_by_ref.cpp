#include <iostream>

void incrementByRef(int &val)
{
    val++;
    std::cout << "Value of i inside the function: "
              << val << std::endl;
}

int main()
{
    int i = 10;
    std::cout << "Value of i before: " << i << std::endl;
    incrementByRef(i);
    std::cout << "Value of i after: " << i << std::endl;
    return 0;
}
