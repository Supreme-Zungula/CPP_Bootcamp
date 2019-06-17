#ifndef __ROBOTOMY__
#define __ROBOTOMY__

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    /* data */
    std::string     _target;

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator= (RobotomyRequestForm const &);

    std::string         getTarget() const;
    virtual void        execute(Bureaucrat const & executor) const;
};

#endif