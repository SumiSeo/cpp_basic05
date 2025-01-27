#include "Bureaucrat.hpp"
#include "iostream"

int main()
{
    std::cout <<"Bureacrat"<<std::endl;
    try
    {
        try
        {
            Bureaucrat b1("sumi",151);
        }
        catch(const std::exception& e)
        {
            std::cerr << "HERE :"<< e.what() << std::endl;;
        }
      
    }
    catch(const std::exception& e)
    {
        /* handle exception */
         // std::cout<< "Exception check : " << e-><<std::endl;
        std::cout << " error: "<<std::endl;
    }
}