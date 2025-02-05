#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("b", 145);
        ShrubberyCreationForm s("target", b);
        b.executeForm(s);

        Bureaucrat c("c", 44);
        RobotomyRequestForm r("robot", c);

        Bureaucrat d("d", 1);
        PresidentialPardonForm p("president", d);

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}