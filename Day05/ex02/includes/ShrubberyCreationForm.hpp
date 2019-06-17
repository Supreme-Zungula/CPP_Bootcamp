#ifndef __SHRUBBERY_FORM__
#define __SHRUBBERY_FORM__

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    /* data */
    std::string     _target;

    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator= (ShrubberyCreationForm const &);

    std::string         getTarget() const;
    virtual void        execute(Bureaucrat const & executor) const;

};

#endif