#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _name("Robotomy"),  _isSigned(false), _gradeForSign(72),_gradeForExec(45)
{
    std::cout << "default constructor " << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(std::string const target): _target(target),_name("Robotomy"), _isSigned(false), _gradeForSign(72),_gradeForExec(45)
{
    std::cout << "target constructor without bureau" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : 
      _gradeForSign(original._gradeForSign),
      _gradeForExec(original._gradeForExec) 
{
    this->_target = original._target;
    this->_isSigned = original._isSigned;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &original)
{
    if(this != &original)
    {
        this->_target = original._target;
        this->_isSigned = original._isSigned;
    }
    return *this;
};


RobotomyRequestForm::RobotomyRequestForm(std::string const target, Bureaucrat const & executor): _target(target),_name("Robotomy"), _isSigned(false), _gradeForSign(72),_gradeForExec(45)
{
    if(executor.getGrade() < this->_gradeForSign)
        this->_isSigned = true;
    if(this->_isSigned)
        this->execute(executor);
    else
        throw Bureaucrat::GradeTooLowException();
};

RobotomyRequestForm::~RobotomyRequestForm()
{
    //destructor function
};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    if(this->_isSigned && this->_gradeForExec > executor.getGrade())
    {
        std::cout << "drill drill" << std::endl;
        std::cout << this->_target << " has been robotomized successfuly 50 of the time" << std::endl;
    }
    else
        std::cout << "robotomy failed" << std::endl;
};

