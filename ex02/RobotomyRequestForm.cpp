#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _name("Robotomy"),  _isSigned(false), _gradeForSign(72),_gradeForExec(45)
{
(void)_isSigned;
(void)_gradeForExec;
(void)_gradeForSign;
};

RobotomyRequestForm::RobotomyRequestForm(std::string const target): _target(target),_name("Robotomy"), _isSigned(false), _gradeForSign(72),_gradeForExec(45)
{

};

RobotomyRequestForm::RobotomyRequestForm(std::string const target, Bureaucrat const & executor): _target(target),_name("Robotomy"), _isSigned(false), _gradeForSign(72),_gradeForExec(45)
{
        (void)executor;
};

RobotomyRequestForm::~RobotomyRequestForm()
{

};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    (void)executor;
};