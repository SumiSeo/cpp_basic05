#ifndef __AFORM__HPP
#define __AFORM__HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class AForm
{
    private :
        std::string _target;
        const std::string _name;
        bool _isSigned;
        const int _gradeForSign;
        const int _gradeForExec;   

    public :
        AForm();
        AForm(std::string const target);
        AForm(std::string const name, std::string const target);
        bool getIsSigned() const;
        const std::string getName() const ;
        virtual void execute(Bureaucrat const & executor) const = 0;
        ~AForm();

};


#endif