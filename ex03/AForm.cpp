#include "AForm.hpp"

AForm::AForm():_name("default"), _isSigned(false), _gradeForSign(10),_gradeForExec(10)
{
    (void)_isSigned;
    (void)_gradeForSign;
    (void)_gradeForExec;
};

AForm::AForm(const AForm &original) : _gradeForSign(original._gradeForSign),
      _gradeForExec(original._gradeForExec) 
{
    this->_isSigned = original._isSigned;
};

AForm &AForm::operator=(const AForm &original)
{
    if(this != &original)
    {
        this->_isSigned = original._isSigned;
       
    }
    return *this;
}


bool AForm::getIsSigned() const
{
    return this->_isSigned;
};

const std::string  AForm::getName() const 
{
    return this->_name;
};

AForm::AForm(std::string const target) : _target(target),_name("default form"), _isSigned(false), _gradeForSign(10),_gradeForExec(10)
{
    (void)_isSigned;
    (void)_gradeForSign;
    (void)_gradeForExec;
};
AForm::~AForm()
{
    
};

