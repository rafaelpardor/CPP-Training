#include <iostream>
#include <vector>

bool linearSearchUnsorted(std::vector<int> &data, int value)
{
    int size = data.size();
    for (int i = 0; i < size; i++)
    {
        if (value == data[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    std::vector<int> vec = {5, 4, 7, 1};
    bool result = linearSearchUnsorted(vec, 10);
    std::cout << result << std::endl;
    return 0;
}
