#include <iostream>
#include <vector>

bool binarySearchRecursive(std::vector<int> &data, int low, int high, int value)
{
    if (low > high)
    {
        return false;
    }
    int mid = low + (high - low) / 2;
    if (data[mid] == value)
    {
        return true;
    }
    else if (data[mid] < value)
    {
        return binarySearchRecursive(data, mid + 1, high, value);
    }
    else
    {
        return binarySearchRecursive(data, low, mid - 1, value);
    }
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int low = 0;
    int high = vec.size() - 1;
    bool result = binarySearchRecursive(vec, low, high, 9);
    std::cout << result << std::endl;
    return 0;
}
