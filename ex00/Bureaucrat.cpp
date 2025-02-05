#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void)
{
    //default constructor

};

Bureaucrat::Bureaucrat(std::string const name, int grade)
{

    this->_name = name;
    this->_grade = 0 + grade;
    if(this->_grade < _maxGrade)
        throw Bureaucrat::GradeTooHighException();
    else if(this->_grade >_minGrade)
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
};

Bureaucrat::~Bureaucrat(void)
{
    //destructor
};

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
    else if(this->_grade >_minGrade)
        throw Bureaucrat::GradeTooLowException();
};

void Bureaucrat::decreGrade()
{
    this->_grade++;
    if(this->_grade < _maxGrade)
        throw Bureaucrat::GradeTooHighException();
    else if(this->_grade >_minGrade)
        throw Bureaucrat::GradeTooLowException();
};

void Bureaucrat::printGrade()
{
    std::cout << this->_name <<", bureaucrat grade " << this->_grade <<std::endl;
};

std::string const &Bureaucrat::getName() const 
{
    return this->_name;
};

int Bureaucrat::getGrade() const 
{
    return this->_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}