#include <iostream>
#include <vector>

bool linearSearchSorted(std::vector<int> &data, int value)
{
    int size = data.size();
    for (int i = 0; i < size; i++)
    {
        if (value == data[i])
        {
            return true;
        }
        else if (value < data[i])
        {
            return false;
        }
    }
    return false;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    bool result = linearSearchSorted(vec, 5);
    std::cout << result << std::endl;
    return 0;
}
