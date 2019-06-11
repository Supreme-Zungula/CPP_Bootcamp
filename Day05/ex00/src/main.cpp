#include <iostream>
#include "../includes/Bureaucrat.hpp"

int main()
{
    Bureaucrat yamkela("Yamkela", 21);
    Bureaucrat kabelo("Kabelo", 1);
    Bureaucrat another("Another", 150);

    std::cout << "Name: " << yamkela.getName() << std::endl;
    std::cout << "Grade: " << yamkela.getGrade() << std::endl;

    try
    {
        kabelo.decrementGrade();
    }
    catch (const GradeTooHighException &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        another.incrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << '\n';
    }

    try
    {
        Bureaucrat lucas("lucas", 231);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    Bureaucrat khutjo(yamkela);
    std::cout << khutjo;

    std::cout << "Assigning another to Kabelo\n";
    kabelo = another;

    std::cout << "name: " << kabelo.getName() << '\n';
    std::cout << "Grade: " << kabelo.getGrade() << '\n';
    return 0;
}
