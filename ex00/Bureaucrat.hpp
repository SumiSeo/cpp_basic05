#ifndef BUREAUCRAT__HPP
#define BUREAUCRAT__HPP

#include "iostream"

class Bureaucrat
{

    public:
        static int _maxGrade;
        static int _minGrade;
        
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &original);
        Bureaucrat &operator=(const Bureaucrat &original);
        ~Bureaucrat(void);

    protected:
    
    private:
        std::string const _name;
        int _grade;
        void GradeTooHighException();
        void GradeTooLowException();
        std::string getName();
        std::string getGrade();
        void increGrade();
        void decreGrade();
        void printGrade();
};


#endif