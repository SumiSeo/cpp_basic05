#ifndef BUREAUCRAT__HPP
#define BUREAUCRAT__HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public : 
        friend std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
        const static int _maxGrade = 1;
        const static int _minGrade = 150;
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &original);
        Bureaucrat &operator=(const Bureaucrat &original);
        ~Bureaucrat(void);

        class GradeTooHighException : public std::exception
        {
            public : 
                const char *what(void) const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public :
                const char *what(void) const throw();
        };

        const std::string &getName() const;
        int getGrade() const;
        void increGrade();
        void decreGrade();
        void printGrade();
        void signForm(Form &form);

        private:
            const std::string _name;
            int _grade;
};


#endif