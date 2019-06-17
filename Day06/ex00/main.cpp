#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include<sstream>
#include <iomanip>

int main(int c, char **v)
{
    if (c != 2)
        return (0);
    double double_value;
    float float_value;
    int int_value;
    char char_value;

    std::string::size_type sz;
    std::string double_res;
    std::string float_res;
    std::string int_res;
    std::string char_res;

    try
    {
        if (strlen(v[1]) == 1 && !isdigit(v[1][0]))
            double_value = static_cast<double>(v[1][0]);
        else
            double_value = std::stod(v[1], &sz);
        double_res = "double: ";
    }
    catch (...)
    {
        std::cout<<"char: impossible\n";
        std::cout<<"int: impossible\n";
        std::cout<<"float: impossible\n";
        std::cout<<"double: impossible\n";
        return (0);
    }

    try
    {
        float_value = static_cast<float>(double_value);
        float_res = "float: ";
    }
    catch (...)
    {
        float_res = "float: impossible";
    }

    try
    {
        int_value = static_cast<int>(double_value);

        if (strcmp(v[1], "nan") == 0 || strcmp(v[1], "inf") == 0 || 
        strcmp(v[1], "-inf") == 0 || strcmp(v[1], "+inf") == 0)
            int_res = "int: impossible";
        else
            int_res = "int: ";
    }
    catch (...)
    {
        int_res = "int: impossible";
    }

    try
    {
        char_value = static_cast<char>(double_value);
        if (int_value < 0 || int_value > 255)
            char_res = "char: impossible";
        else if (int_value >= 0 && int_value < 32)
            char_res = "char: Non displayable";
        else if (int_value >= 128 && int_value <= 255)
            char_res = "char: extended ascii characters";
        else
            char_res = "char: ";        
    }
    catch (...)
    {
        char_res = "char: impossible";
    }

     
    if (char_res == "char: ")
        std::cout<<char_res<<"'"<<char_value<<"'\n";
    else
       std::cout<<char_res<<std::endl;
    
    if (int_res == "int: ")
        std::cout<<int_res<<int_value<<"\n";
    else
       std::cout<<int_res<<std::endl;
    
    if (float_res == "float: ")
    {
        std::cout<<std::fixed;
        std::cout << std::setprecision(2);
        std::cout<<float_res<<float_value<<"f\n";
    }
    else
       std::cout<<float_res<<std::endl;
    
    if (double_res == "double: ")
    {
        std::cout<<std::fixed;
        std::cout << std::setprecision(2);
        std::cout<<double_res<<double_value<<"\n";
    }
    else
       std::cout<<double_res<<std::endl;
    return 0;
}