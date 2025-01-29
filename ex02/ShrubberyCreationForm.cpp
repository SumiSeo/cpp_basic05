#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _name("default"),  _isSigned(false), _gradeForSign(10),_gradeForExec(10)
{
     (void)_isSigned;
    (void)_gradeForSign;
    (void)_gradeForExec;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : _target(target),_name("default"), _isSigned(false), _gradeForSign(10),_gradeForExec(10)
{
    (void)target; 
    (void)_isSigned;
    (void)_gradeForSign;
    (void)_gradeForExec;
};
ShrubberyCreationForm::~ShrubberyCreationForm()
{

};
