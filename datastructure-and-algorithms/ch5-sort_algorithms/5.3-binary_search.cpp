#include <iostream>
#include <vector>

bool binarySearch(std::vector<int> &data, int value)
{
    int size = data.size();
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (data[mid] == value)
        {
            return true;
        }
        else if (data[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool result = binarySearch(vec, 9);
    std::cout << result << std::endl;
    return 0;
}
