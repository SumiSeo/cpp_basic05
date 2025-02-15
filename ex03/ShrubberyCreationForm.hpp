#ifndef __SHRUBBERYCREATIONFORM__HPP
#define __SHRUBBERYCREATIONFORM__HPP

#include "AForm.hpp"
#include "iostream"
#include <string>

class Aform;

class ShrubberyCreationForm : public AForm
{
    private :
        std::string _target;
        const std::string _name;
        bool _isSigned;
        const int _gradeForSign;
        const int _gradeForExec;   

    public :
        std::string getName() const ;
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &origiinal);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(std::string const target, Bureaucrat const & executor);
        virtual ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;

};

#endif 