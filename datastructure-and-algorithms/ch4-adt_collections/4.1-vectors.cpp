#include <iostream>
#include <vector>

void vectorExample()
{
    std::vector<int> vec;
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    int count = vec.size();
    std::cout << "Values stored are:";
    for (int i = 0; i < count; i++)
    {
        std::cout <<" "<< vec[i];
    }
}

int main()
{
    vectorExample();
    return 0;
}
