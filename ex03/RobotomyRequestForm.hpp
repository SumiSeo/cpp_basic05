#ifndef __ROBOTOMYREQUESTFORM__HPP
#define __ROBOTOMYREQUESTFORM__HPP

#include "AForm.hpp"
# include "iostream"

class RobotomyRequestForm : public AForm
{
    private :
        std::string _target;
        const std::string _name;
        bool _isSigned;
        const int _gradeForSign;
        const int _gradeForExec;   
        void execute(Bureaucrat const & executor) const;

    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(const RobotomyRequestForm &origiinal);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &original);
        RobotomyRequestForm(std::string const target, Bureaucrat const & executor);
        ~RobotomyRequestForm();
};

#endif 