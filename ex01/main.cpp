#include <iostream>
#include "Form.hpp"


int main()
{
    try
    {
        Bureaucrat bureaucrat("Bureau 1",20);
        Form f("Validation Form", 10, 40);
        std::cout << f <<std::endl;
        f.beSigned(bureaucrat);
        std::cout << f <<std::endl;
        bureaucrat.signForm(f);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() <<std::endl;
    }
}