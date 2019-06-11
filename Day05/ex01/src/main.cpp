#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main()
{
    Bureaucrat kabelo("Kabelo", 1);
    Bureaucrat peasant("Peasant", 150);

    Form leaseForm("Lease form", 10, 15);
    try
    {
        kabelo.signForm(leaseForm);
        peasant.signForm(leaseForm);
    }
    catch (const GradeTooLowException &e)
    { 
    }

    std::cout << std::endl;
    std::cout << leaseForm;
    std::cout << std::endl;

    Form copyForm(leaseForm);
    std::cout << copyForm;
    std::cout << std::endl;

    Form endemnityForm("Endemnity form", 33, 66);
    leaseForm = endemnityForm;
    std::cout << leaseForm;
    std::cout << std::endl;

    return 0;
}
