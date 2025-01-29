#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout<< "test" << std::endl;
    try
    {
        // ShrubberyCreationForm s("target");
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}