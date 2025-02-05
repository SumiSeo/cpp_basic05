#include "Intern.hpp"


Intern::Intern(void)
{
    //default constructor
};

Intern::Intern(const Intern &original)
{
    *this = original;
};

Intern &Intern::operator=(const Intern &original)
{
    if(this != &original)
    {
        
    }

    return *this;
};

Intern::~Intern(void)
{
    //default destructor
};


AForm* Intern::makeForm(const std::string name, const std::string target)
{
    AForm* form(name, target);
    // form->_name = name;
    // form->_target = target;
    // (void)name;
    // (void)target;
    return form;
};

    
 