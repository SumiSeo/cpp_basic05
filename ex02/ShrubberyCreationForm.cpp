#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>  

ShrubberyCreationForm::ShrubberyCreationForm(): _name("Shrubbery"),  _isSigned(false), _gradeForSign(145),_gradeForExec(137)
{
    std::cout << "default constructor " << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : _target(target),_name("Shrubbery"), _isSigned(false), _gradeForSign(145),_gradeForExec(137)
{
    std::cout << "target constructor without bureau" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : 
      _gradeForSign(original._gradeForSign),
      _gradeForExec(original._gradeForExec) 
{
    this->_target = original._target;
    this->_isSigned = original._isSigned;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &original)
{
    if(this != &original)
    {
        this->_target = original._target;
        this->_isSigned = original._isSigned;
    }
    return *this;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target, Bureaucrat const & executor) : _target(target),_name("Shrubbery"), _isSigned(false), _gradeForSign(145),_gradeForExec(137)
{
    if(executor.getGrade() < this->_gradeForSign)
        this->_isSigned = true;
    if(this->_isSigned)
        this->execute(executor);
    else
        throw Bureaucrat::GradeTooLowException();
   
};


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //destructor function
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

    if(this->_isSigned && this->_gradeForExec > executor.getGrade())
    {
      std::string filename = this->_target +"_shurrubbery";
      std::ofstream outfile(filename.c_str());
      std::string contents = 	
    "                           %                         %            \n\
    @@@     %    @@     @@@@                                  *       \n\
        @@ %     @  %   @   %          %               ;      ***      \n\
        @@    @      @                               #     *****     \n\
    @@@   @@@@@  @@@@@@___    %         %           {###}  *******\n\
        @-@  @   @      @@@@       %               <## ####>********\n\
    @@@@@   @ @         @@@@@               %      {###}***********\n\
        %  @  @@ /@@@@@                          <###########> *******\n\
            @-@@@@    V     %          %           {#######}******* ***\n\
    %       @@      v        { }             <###############>*******\n\
            @@               {^^,               {## ######}***** ****\n\
    %      @@     %          (   `-;       <###################> ****\n\
            @@           _     `;;~~           {#############}********\n\
            @@   %      /(______);        <################  #####>***\n\
    %     @@@        (         (           {##################}*****\n\
            @@@        |:------( )     <##########################>**\n\
    @@@@     @@@      _//        \\        {###   ##############}*****\n\
    @@@@@@@  @@@@@    / /@@@@@@@@@ vv  <##############################>\n\
    @@@@@@@ @@@@@@@ @@@@@@@@@@@@@@@@@@@       @@@@@@  @@@@@@@  @@@@\n\
    @@@@@@###@@@@@### @@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
    @@@@@@@@###@##@@ @@@@@@@@@@@@@@@@@@@@@ @@@@@   @@@@@@@@@@@@@@@@@@@\n\
    @@@@@@@@@@@### @@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@\n\
    -@@@@@@@@@#####@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    outfile << contents << std::endl;
    outfile.close();
    }
    else
        throw Bureaucrat::GradeTooLowException();

};


std::string ShrubberyCreationForm::getName() const 
{
    return this->_name;
};