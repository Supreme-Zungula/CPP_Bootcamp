#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> temp = Array<int>(5);
    Array<int> intArr = Array<int>(5);

    temp[0] = 0;
    temp[1] = 1;
    temp[2] = 2;
    temp[3] = 3;
    temp[4] = 4;

    intArr = temp;
    temp.print();
    std::cout << '\n';
    intArr.print();
    std::cout << '\n';
    try
    {
        std::cout << temp[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
