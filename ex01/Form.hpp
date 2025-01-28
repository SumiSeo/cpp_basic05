#ifndef FORM__HPP
#define FORM__HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
    private :
        const std::string _name;
        bool _isSigned;
        const int _gradeForSign;
        const int _gradeForExec;

    public :
        friend std::ostream &operator<<(std::ostream &out, const Form &form);
        void beSigned(Bureaucrat &bureaucrat);
        Form(void);
        Form(const std::string name, const int gradeForSign, const int gradeForExec);
        Form(const Form &original);
        Form &operator=(const Form &original);
        ~Form(void);

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

        //member functions
        const std::string &getName() const;
        const bool checkIsSigned() const;
        const int getGradeForSign() const;
        const int getGradeForExec() const;

   

};

#endif