#include <iostream>

template <class T>
void swap(T &num1, T &num2)
{
    T temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
}

template <class T>
T min(T val1, T val2)
{
    if (val1 == val2)
    {
        return val2;
    }
    else if (val1 < val2)
    {
        return (val1);
    }
    else
    {
        return (val2);
    }
}

template <class T>
T max(T val1, T val2)
{
    if (val1 == val2)
    {
        return val2;
    }
    else if (val1 > val2)
    {
        return (val1);
    }
    else
    {
        return (val2);
    }
}

int main()
{

    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

    return 0;
}
