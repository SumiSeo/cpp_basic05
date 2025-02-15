#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
  
    AForm* rrf = NULL;
    AForm* rrff = NULL;

    try
    {
        //ShrubberyForm, RobotomyForm, PresidentialForm
        Intern someRandomIntern;
        rrf = someRandomIntern.makeForm("ShrubberyForm", "yo");
        Bureaucrat b("sumi", 15);
        // rrf->execute(b);

        
        Intern testIntern;
        rrff = testIntern.makeForm("PresidentialForm", "sumi");
        Bureaucrat c("pierre", 80);
        rrff->execute(c);


    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete rrf;
    delete rrff;
    return 0;
}