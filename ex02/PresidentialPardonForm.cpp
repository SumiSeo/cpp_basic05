#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): _name("Presidential"),  _isSigned(false), _gradeForSign(25),_gradeForExec(5)
{
        std::cout << "default constructor " << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : _target(target),_name("Presidential"), _isSigned(false), _gradeForSign(25),_gradeForExec(5)
{
        std::cout << "target constructor without bureau" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string const target, Bureaucrat const & executor): _target(target),_name("Presidential"), _isSigned(false), _gradeForSign(25),_gradeForExec(5)
{
        if(executor.getGrade() < this->_gradeForSign)
                this->_isSigned = true;
        if(this->_isSigned)
                this->execute(executor);
        else
                throw Bureaucrat::GradeTooLowException();
};

PresidentialPardonForm::~PresidentialPardonForm()
{
        //destructor function
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    if(this->_isSigned && this->_gradeForExec > executor.getGrade())
    {
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        std::cout << "presidential failed" << std::endl;
};