#ifndef __FORM__
#define __FORM__

#include "Bureaucrat.hpp"

class Form
{
private:
    std::string const       _name;
    bool                    _signed;
    int const               _signingGrade;
    int const               _executingGrade;
    Form();
 
public:
    Form(std::string const name, int signingGrade, int exGrade);
    Form(Form const &srcForm);
    ~Form();
    Form& operator=(Form const &newForm);

    std::string const getName() const;
    bool    getSigned() const;
    int     getSigningGrade() const;
    int     getExecutingGrade() const;
    void    beSigned(Bureaucrat & bureaucrat);
};

std::ostream& operator<<(std::ostream &os, Form const &form);

#endif