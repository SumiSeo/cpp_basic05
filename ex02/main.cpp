#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("b", 149);
        ShrubberyCreationForm s("target", b);
        b.executeForm(s);

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}