#include <iostream>

class A
{

public:
    std::string Name;
    int Weight;
    A(std::string name, int w)
    {
        Name = name;
        Weight = w;
    }
    void Props()
    {
        std::cout << "My name is "
                  << Name << " and my weight is "
                  << Weight << "kg" << std::endl;
    }
};

class B : public class A
{
    void Props()
    {
        std::cout << "My name is "
                  << Name << " and my weight is "
                  << Weight << "kg also im class b"
                  << std::endl;
    }
};

int main()
{
    A classA("Class A", 100);
    classA.Props();

    B classB();
    classB.Props();

    return 0;
}