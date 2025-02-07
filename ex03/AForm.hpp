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
        AForm(const AForm &original);
        AForm &operator=(const AForm &original); 
        AForm(std::string name, int signGrade, int execGrade);
        AForm(std::string const target);
        bool getIsSigned() const;
        virtual std::string getName() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual ~AForm();

};


#endif