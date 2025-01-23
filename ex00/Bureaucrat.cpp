#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void)
{
    
};

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
    
    this->_name = name;
    this->_grade = grade;
    printGrade();
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

};


void Bureaucrat::GradeTooHighException()
{

};

void Bureaucrat::GradeTooLowException()
{

};

std::string Bureaucrat::getName()
{
    return this->_name;
};

int Bureaucrat::getGrade()
{
    return this->_grade;
};

void Bureaucrat::increGrade()
{
    this->_grade++;
};

void Bureaucrat::decreGrade()
{
    this->_grade--;
};

void Bureaucrat::printGrade()
{
    std::cout << this->_name <<", bureaucrat grade " << this->_grade <<std::endl;
};

