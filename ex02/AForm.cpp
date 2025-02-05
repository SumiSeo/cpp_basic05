#include "AForm.hpp"

AForm::AForm():_name("default"), _isSigned(false), _gradeForSign(10),_gradeForExec(10)
{
    (void)_isSigned;
    (void)_gradeForSign;
    (void)_gradeForExec;
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

