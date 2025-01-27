#ifndef BUREAUCRAT__HPP
#define BUREAUCRAT__HPP

#include "iostream"

class Bureaucrat
{
    public:
        const static int _minGrade = 1;
        const static int _maxGrade = 150;
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &original);
        Bureaucrat &operator=(const Bureaucrat &original);
        ~Bureaucrat(void);
        std::string getName();
        int getGrade();
        void increGrade();
        void decreGrade();
        void printGrade();
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what(void) const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
    
    private:
        std::string _name;
        int _grade;
            
     
};


#endif