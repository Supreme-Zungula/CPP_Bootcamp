#ifndef __FORM__
#define __FORM__

#include "Bureaucrat.hpp"

class Form
{
private:
    std::string const       _name;
    bool                    _signed;
    int                     _executingGrade;
    int                     _signingGrade;
    Form();

public:
    Form(std::string const name, int signingGrade, int exGrade);
    Form(Form const &srcForm);
    ~Form();
    Form& operator=(Form const &newForm);

    std::string const   getName() const;
    bool                getSigned() const;
    int                 getSigningGrade() const;
    int                 getExecutingGrade() const;
    void                beSigned(Bureaucrat & bureaucrat);
    virtual void        execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &os, Form const &form);

#endif