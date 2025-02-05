#include "Bureaucrat.hpp"
#include "iostream"

int main()
{
    try
    {
        Bureaucrat a("a",2);
        Bureaucrat b("b",149);
   
        a.increGrade();
        b.decreGrade();

        std::cout << a << std::endl;
        std::cout << b << std::endl;

        // a.increGrade();
        // std::cout << a << std::endl;
        b.decreGrade();
        std::cout << b << std::endl;



      
    }
    catch(std::exception& e)
    {
        std::cout << e.what()<<std::endl;
    }
}