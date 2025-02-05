#ifndef __INTERN__HPP
#define __INTERN__HPP

#include "AForm.hpp"
#include <iostream>

class Intern
{

    private:
        void makeForm(const std::string name, const std::string target);
    
    public:
        Intern(void);
        Intern(const Intern &original);
        Intern &operator=(const Intern &original);
        ~Intern(void);
};

#endif