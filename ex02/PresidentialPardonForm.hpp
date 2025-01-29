#ifndef __PRESIDENTIALPARDONFORM__HPP
#define __PRESIDENTIALPARDONFORM__HPP

#include "AForm.hpp"
# include "iostream"

class PresidentialPardonForm : public AForm
{
    private :
        std::string _target;
        const std::string _name;
        bool _isSigned;
        const int _gradeForSign;
        const int _gradeForExec;   
        void execute(Bureaucrat const & executor) const;

    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(std::string const target, Bureaucrat const & executor);
        ~PresidentialPardonForm();
};


#endif 