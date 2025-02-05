#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::cout<< "test" << std::endl;
    try
    {
        Bureaucrat b("b", 14);
        ShrubberyCreationForm s("target", b);
        b.executeForm(s);

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}