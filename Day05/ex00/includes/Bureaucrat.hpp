#ifndef __BUREAUCRAT__
#define __BUREAUCRAT__

#include <exception>
#include <string>

class Bureaucrat
{
private:
    Bureaucrat();

protected:
    std::string const _name;
    int               _grade;

public:
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &bureaucrat);
    ~Bureaucrat();
    Bureaucrat& operator=(Bureaucrat const &bureaucrat);

    std::string const getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &srcObj);

class GradeTooHighException : public std::exception
{
public:
    GradeTooHighException() throw();
    GradeTooHighException(const GradeTooHighException &) throw();
    GradeTooHighException& operator= (const GradeTooHighException &) throw();
    virtual ~GradeTooHighException() throw();
    virtual const char *what() const throw();
};

class GradeTooLowException : public std::exception
{
public:
    GradeTooLowException() throw();
    GradeTooLowException(const GradeTooLowException &) throw();
    GradeTooLowException& operator= (const GradeTooLowException &) throw();
    virtual ~GradeTooLowException() throw();
    virtual const char *what() const throw();
};

#endif