#include <iostream>
#include "../includes/Form.hpp"

Form::Form() : _name(), _signed(false), _signingGrade(), _executingGrade()
{
}

Form::Form(std::string const name, int signingGrade, int exGrade) : _name(name), _signed(false), _signingGrade(signingGrade), _executingGrade(exGrade)
{
    if (signingGrade < 1 || exGrade < 1)
    {
        throw GradeTooHighException();
    }
    else if (signingGrade > 150 || exGrade > 150)
    {
        throw GradeTooLowException();
    }
    std::cout << "A form has been created.\n";
}

Form::Form(Form const &form) : _name(form.getName()),
                               _signed(form.getSigned()), _signingGrade(form.getSigningGrade()), _executingGrade(form.getExecutingGrade())
{
}

Form::~Form()
{
    std::cout << "A form has been destroyed.\n";
}

Form &Form::operator=(Form const &newForm)
{
    if (this != &newForm)
    {
        this->_signed = newForm.getSigned();
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
    os << "Name: " << form.getName() << "\n";
    os << "Signed: " << form.getSigned() << "\n";
    os << "Signing grade: " << form.getSigningGrade() << '\n';
    os << "Executing grade: " << form.getExecutingGrade() << "\n";
    return (os);
}
std::string const Form::getName() const
{
    return (_name);
}

bool Form::getSigned() const
{
    return (_signed);
}

int Form::getSigningGrade() const
{
    return (_signingGrade);
}

int Form::getExecutingGrade() const
{
    return (_executingGrade);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _signingGrade)
    {
        throw GradeTooLowException();
    }
    _signed = true;
}
