#ifndef __BUREAUCRAT__
#define __BUREAUCRAT__

#include <exception>
#include <string>

class Form;
class Bureaucrat
{
private:
    Bureaucrat();

protected:
    std::string const _name;
    int _grade;

public:
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &bureaucrat);
    ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat const &bureaucrat);

    std::string const getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &srcObj);

class GradeTooHighException : public std::exception
{
public:
    GradeTooHighException();
    virtual const char *what() const throw();
};

class GradeTooLowException : public std::exception
{
public:
    GradeTooLowException();
    virtual const char *what() const throw();
};
#endif