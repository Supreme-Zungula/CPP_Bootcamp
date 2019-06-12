#include <iostream>
#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("")
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{

    if (grade > 150)
    {
        throw GradeTooLowException();
    }
    else if (grade < 1)
    {
        throw GradeTooHighException();
    }
    _grade = grade;
    std::cout << "A bureaucrat has been born.\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : _name(bureaucrat.getName())
{
    if (this != &bureaucrat)
    {
        *this = bureaucrat;
    }
    std::cout << "A bureaucrat has been born, through a copy of another.\n";
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "A bureaucrat has been vanquished.\n";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
    if (this != &bureaucrat)
    {
        this->_grade = bureaucrat.getGrade();
    }

    return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &srcObj)
{
    os << srcObj.getName() << ", bureaucrat grade " << srcObj.getGrade() << std::endl;
    return (os);
}

void Bureaucrat::incrementGrade()
{
    _grade++;
    if (_grade > 150)
    {
        _grade = 150;
        throw GradeTooLowException();
    }
}

void Bureaucrat::decrementGrade()
{
    _grade--;
    if (_grade < 1)
    {
        _grade = 1;
        throw GradeTooHighException();
    }
}

std::string const Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

GradeTooLowException::GradeTooLowException() throw() : std::exception()
{
}

GradeTooLowException::GradeTooLowException(const GradeTooLowException &gradeExcept) throw()
{
    if (this != &gradeExcept)
    {
        *this = gradeExcept;
    }
}

GradeTooLowException &GradeTooLowException::operator=(const GradeTooLowException &gradeExcept) throw()
{
    if (this != &gradeExcept)
    {
        *this = gradeExcept;
    }

    return (*this);
}

GradeTooLowException::~GradeTooLowException() throw()
{
}

const char *GradeTooLowException::what() const throw()
{
    return ("Grade too low.");
}

GradeTooHighException::GradeTooHighException() throw() : std::exception()
{
}

GradeTooHighException::GradeTooHighException(const GradeTooHighException &gradeExcept) throw()
{
    if (this != &gradeExcept)
    {
        *this = gradeExcept;
    }
}

GradeTooHighException &GradeTooHighException::operator=(const GradeTooHighException &gradeExcept) throw()
{
    if (this != &gradeExcept)
    {
        *this = gradeExcept;
    }
    return (*this);
}

GradeTooHighException::~GradeTooHighException() throw()
{
}

const char *GradeTooHighException::what() const throw()
{
    return ("Grade too high.");
}