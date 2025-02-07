#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
  
    try
    {
        //ShrubberyForm, RobotomyForm, PresidentialForm
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("ShrubberyForm", "nder");
        Bureaucrat b("sumi",1);
        rrf->execute(b);
        delete rrf;

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
   
    }
    return 0;
}