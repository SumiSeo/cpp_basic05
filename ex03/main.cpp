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
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("RobotomyForm", "Bender");

        Intern Jr_Intern;
        AForm *robo_intern;

        robo_intern = Jr_Intern.makeForm("DoYouKnowMe", "Hmmmm");
        robo_intern = Jr_Intern.makeForm("RobotomyForm", "World");

        std::cout << robo_intern->getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}