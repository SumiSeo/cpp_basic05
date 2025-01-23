#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat(void)
{
    this->_minGrade = 1;
    this->_maxGrade = 150;

};

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->_minGrade = 1;
    this->_maxGrade = 150;
    this->_name = name;
    this->_grade = grade;
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

~Bureaucrat::Bureaucrat(void)
{

};


void Bureaucrat::GradeTooHighException()
{

};

void Bureaucrat::GradeTooLowException()
{

};

std::string Bureaucrat::getName()
{

};

std::string Bureaucrat::getGrade()
{

};

void Bureaucrat::increGrade()
{

};

void Bureaucrat::decreGrade()
{

};

void Bureaucrat::printGrade()
{

};

