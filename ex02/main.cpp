#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{

    AForm* s = NULL;
    AForm* r = NULL;
    AForm* p = NULL;
    
    try 
    {
        Bureaucrat b("b", 14);
        s = new ShrubberyCreationForm("yoi", b);
        b.executeForm(*s);

        Bureaucrat c("c", 17);
        r = new RobotomyRequestForm("squid", c);
        c.executeForm(*r);

        Bureaucrat d("d", 1);
        p = new PresidentialPardonForm("yoon", d);
        d.executeForm(*p);
    } 

    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    delete s;
    delete r;
    delete p;

    return 0;
}