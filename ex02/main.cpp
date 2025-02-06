#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("b", 15);
        ShrubberyCreationForm s("yoi", b);
        b.executeForm(s);

        Bureaucrat c("c", 35);
        RobotomyRequestForm r("robot", c);
        c.executeForm(r);

        Bureaucrat d("d", 1);
        PresidentialPardonForm p("president", d);
        d.executeForm(p);

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}