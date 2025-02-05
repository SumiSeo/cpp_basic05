#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): _name("Presidential"),  _isSigned(false), _gradeForSign(25),_gradeForExec(5)
{
        (void)_isSigned;
        (void)_gradeForExec;
        (void)_gradeForSign;
};

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : _target(target),_name("Presidential"), _isSigned(false), _gradeForSign(25),_gradeForExec(5)
{

};

PresidentialPardonForm::PresidentialPardonForm(std::string const target, Bureaucrat const & executor): _target(target),_name("Presidential"), _isSigned(false), _gradeForSign(25),_gradeForExec(5)
{
        (void)executor;

};

PresidentialPardonForm::~PresidentialPardonForm()
{

};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    (void)executor;
};