#ifndef __INTERN__HPP
#define __INTERN__HPP

#include "AForm.hpp"
#include <iostream>

class Intern
{
    
    public:
        Intern(void);
        Intern(const Intern &original);
        AForm *makeForm(const std::string name, const std::string target);
        Intern &operator=(const Intern &original);
        ~Intern(void);
};

#endif