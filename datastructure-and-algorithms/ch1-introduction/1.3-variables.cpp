#include <iostream>

int variablesExamples()
{
    int var1, var2, var3;
    var1 = 100;
    var2 = 300;
    var3 = var1 + var2;

    return var3;
}

int main()
{
    std::cout << variablesExamples() << std::endl;
    return 0;
}
