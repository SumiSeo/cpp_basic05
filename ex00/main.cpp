#include "Bureaucrat.hpp"
#include "iostream"

int main()
{
    std::cout <<"Bureacrat"<<std::endl;
    try
    {
        try
        {
            Bureaucrat test("test",2);
            std::cout << test << std::endl;


        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;;
        }
        
        Bureaucrat a("a",2);
        Bureaucrat b("b",3);

        a.increGrade();
        b.decreGrade();
        std::cout << a << std::endl;
        std::cout << b << std::endl;
      
    }
    catch(std::exception& e)
    {
        std::cout << e.what()<<std::endl;
    }
}