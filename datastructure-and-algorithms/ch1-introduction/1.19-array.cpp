#include <iostream>

void printArray(int arr[], int count)
{
    std::cout << "Values stored are: ";
    for (int i = 0; i < count; i++)
    {
        std::cout << " " << arr[i];
    }
}

void arrayExample()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    printArray(arr, 20);
}

int main()
{
    arrayExample();
    return 0;
}
