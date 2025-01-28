#include "Form.hpp"

void Form::beSigned(Bureaucrat &bureaucrat)
{

};

Form::Form(void)
{
    //default constructor

};

Form::Form(const Form &original)
{
    // this->_name = original._name;
    this->_isSigned = original._isSigned;
    // this->_gradeForSign = original._gradeForSign;
    // this->_gradeForExec = original._gradeForExec;

};

Form &Form::operator=(const Form &original)
{
    if(this != &original)
    {
        // this->_name = original._name;
        this->_isSigned = original._isSigned;
        // this->_gradeForSign = original._gradeForSign;
        // this->_gradeForExec = original._gradeForExec;
    }
    return *this;
};

Form::~Form(void)
{
    //destructor
};

class GradeTooLowException : public std::exception
{
    public :
        const char *what(void) const throw();
};

class GradeTooHighException : public std::exception
{
    public:
        const char *what(void) const throw();

};

const std::string &Form::getName() const
{
    return this->_name;
};  

const bool Form::checkIsSigned() const
{
    return true;
};

const int Form::getGradeForSign() const
{
    return 1;
};

const int Form::getGradeForExec() const
{
    return 1;
};



std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << form.getName() << ", bureaucart grade ";
    return out;
}
