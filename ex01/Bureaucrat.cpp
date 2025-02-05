#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    //default constructor
};

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->_name = name;
    this->_grade = 0+grade;
    if(this->_grade < _maxGrade)
        throw Bureaucrat::GradeTooHighException();
    else if(this->_grade > _minGrade)
        throw Bureaucrat::GradeTooLowException();
};

Bureaucrat::Bureaucrat(const Bureaucrat &original)
{
    this->_grade = original._grade;
    this->_name = original._name;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &original)
{
    if(this != &original)
    {
        this->_grade = original._grade;
        this->_name = original._name;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(void)
{
    //destructor
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "Grade Too High...";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "Grade Too Low...";
}

void Bureaucrat::increGrade()
{
    this->_grade--;
    if(this->_grade < _maxGrade)
        throw Bureaucrat::GradeTooHighException();
    else if(this->_grade > _minGrade)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decreGrade()
{
    this->_grade++;
    if(this->_grade < _maxGrade)
        throw Bureaucrat::GradeTooHighException();
    else if(this->_grade > _minGrade)
        throw Bureaucrat::GradeTooLowException();
}

std::string const &Bureaucrat::getName() const
{
    return this->_name;
} 

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucart grade " << bureaucrat.getGrade();
    return (out);
}


void Bureaucrat::signForm(Form &form)
{
    if(form.checkIsSigned() == 1)
        std::cout << this->getName() << ", signed ! " << form.getName() << std::endl;
    else
    {   
        std::string reason;
        if(form.getGradeForSign() < this->_grade)
            reason = "bureau's grade is lower thant form's grade";
        else
            reason = "bureau's grade is higher thant form's grade";
        std::cout << this->getName() << "couldn't sign " << form.getName() << "Because " << reason << std::endl;
    }
}
