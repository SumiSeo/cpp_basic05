#ifndef BUREAUCRAT__HPP
#define BUREAUCRAT__HPP

#include "iostream"

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &original);
        Bureaucrat &operator=(const Bureaucrat &original);
        ~Bureaucrat(void);

    protected:
    
    private:
        const static int _minGrade;
        const static int _maxGrade;
        std::string _name;
        int _grade;
        void GradeTooHighException();
        void GradeTooLowException();
        std::string getName();
        int getGrade();
        void increGrade();
        void decreGrade();
        void printGrade();
};


#endif