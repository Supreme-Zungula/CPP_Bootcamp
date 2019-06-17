#include <iostream>
#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery creation form", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery creation form", 145, 137),
                                                                   _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubForm) : Form(shrubForm)
{
    if (this != &shrubForm)
    {
        *this = shrubForm;
    }
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrubForm)
{
    if (this != &shrubForm)
    {
        this->_target = shrubForm.getTarget();
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
     
}