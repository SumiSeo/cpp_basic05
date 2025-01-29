#ifndef __AFORM__HPP
#define __AFORM__HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class AForm
{
    protected :
        std::string _target;

    private :
        const std::string _name;
        bool _isSigned;
        const int _gradeForSign;
        const int _gradeForExec;   
        virtual void execute(Bureaucrat const & executor) const = 0;

    public :
        AForm();
        AForm(std::string const target);
        ~AForm();

};



#endif