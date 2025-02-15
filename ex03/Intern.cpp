#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept> 

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
   int i = 0;
   std::string form_lists[] = {"ShrubberyForm", "RobotomyForm", "PresidentialForm"};

   while(i < 3 && name != form_lists[i])
        i++;
   switch(i)
   {
    case 0:
    {
        std::cout << "Intern creates " << name << std::endl;
        return (new ShrubberyCreationForm(target));
    }
    case 1:
    {
        std::cout << "Intern creates " << name << std::endl;
        return (new RobotomyRequestForm(target));
    }
    case 2:
    {
        std::cout << "Intern creates " << name << std::endl;
        return (new PresidentialPardonForm(target));
    }
    default :
    {
        std::cout << "Intern did not work today !" << std::endl;
    }
    throw std::runtime_error("Intern could not create form: " + name);
   }   
};

    
 