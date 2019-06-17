#ifndef __PRESIDENTIAL__
#define __PRESINDENTIAL__

#include "Form.hpp"

class PresindentialPardonForm : public Form
{
private:
    /* data */
    std::string     _target;
    
public:
    PresindentialPardonForm(std::string target);
    // PresindentialPardonForm(std::string name, int const signGrd, int const execGrd);
    PresindentialPardonForm(PresindentialPardonForm const &);
    ~PresindentialPardonForm();
    PresindentialPardonForm& operator= (PresindentialPardonForm const &);

    std::string         getTarget() const;
    virtual void        execute(Bureaucrat const & executor) const;
};

#endif