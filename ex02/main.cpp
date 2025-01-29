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
        Bureaucrat b("b", 20);
        ShrubberyCreationForm s("target", b);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}