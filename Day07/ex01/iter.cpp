#include <iostream>

template <class T>
void iter(T arr[], unsigned int size, void (*func)(T))
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        func(arr[i]);
    }
}

void displayItem(int item)
{
    std::cout << item;
}

void toCaps(char c)
{
    std::cout << static_cast<char>(std::toupper(c));
}

int main()
{
    char name[] = "Name";
    int intArr[5] = {1, 2, 3, 4, 5};
    std::string strName = "name";

    iter(name, 5, toCaps);
    std::cout << std::endl;
    iter(intArr, 5, displayItem);

    return 0;
}
