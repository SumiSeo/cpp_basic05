#include "Form.hpp"

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= this->_gradeForSign)
        this->_isSigned = true;

};

Form::Form(void) : _name("Default"), _isSigned(false), _gradeForSign(10),_gradeForExec(10)
{
   // default constructor
};

Form::Form(const std::string name, const int gradeForSign, const int gradeForExec) : _name(name), _isSigned(false), _gradeForSign(gradeForSign),_gradeForExec(gradeForExec)
{
    // custom constructor
};

Form::Form(const Form &original) : _name(original.getName()), _isSigned(false), _gradeForSign(original.getGradeForSign()),_gradeForExec(original.getGradeForExec())
{
    // copy constructor
    // Form a = b;
}

Form &Form::operator=(const Form &original)
{
    if(this == &original)
    {
        return *this;
    }
    return *this;
};

Form::~Form(void)
{
    //destructor
};


const char *Form::GradeTooLowException::what(void) const throw()
{
    return "Level Too Low...";
};


const char *Form::GradeTooHighException::what(void) const throw()
{
    return "Level Too High...";
};


const std::string &Form::getName() const
{
    return this->_name;
};  

const bool Form::checkIsSigned() const
{
    return this->_isSigned;
};

const int Form::getGradeForSign() const
{
    return this->_gradeForSign;
};

const int Form::getGradeForExec() const
{
    return this->_gradeForExec;
};

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "FORM name: " << form.getName() << ", FORM isSigned: " << form.checkIsSigned() << ", FORM sign grade: " << form.getGradeForSign() 
    << ", FORM exec grade : " << form.getGradeForExec() << std::endl;
    return out;
}
