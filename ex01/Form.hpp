#ifndef FORM__HPP
#define FORM__HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
    public :
    friend std::ostream &operator<<(std::ostream &out, const Form &form);
    void beSigned(Bureaucrat &bureaucrat);
    Form(void);
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

    const std::string &getName() const;
    const bool checkIsSigned() const;
    const int getGradeForSign() const;
    const int getGradeForExec() const;

    private :
        const std::string _name = "hi";
        bool _isSigned;
        int const _gradeForSign =1;
        int const _gradeForExec=2;

};

#endif