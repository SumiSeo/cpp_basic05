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
        Intern RandomIntern1;
        AForm* rrf1;
        rrf1 = RandomIntern1.makeForm("RobotomyForm", "Bender");

        Bureaucrat a("a",47);
        rrf1->execute(a);

        Intern RandomIntern2;
        AForm* rrf2;
        rrf2 = RandomIntern2.makeForm("ShrubberyForm", "Sumi");

        Bureaucrat b("b",1);
        rrf2->execute(b);

        Intern RandomIntern3;
        AForm* rrf3;
        rrf3 = RandomIntern3.makeForm("PresidentialForm", "Sumi");

        Bureaucrat c("c",148);
        rrf3->execute(c);

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}