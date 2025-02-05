#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>  

/*
ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.
*/

/*
Now, add the execute(Bureaucrat const & executor) const member function to
the base form and implement a function to execute the form’s action of the concrete
classes. 

You have to check that the form is signed and that the grade of the bureaucrat
attempting to execute the form is high enough. Otherwise, throw an appropriate excep-
tion.


Whether you want to check the requirements in every concrete class or in the base
class (then call another function to execute the form) is up to you. However, one way is
prettier than the other one.
Lastly, add the executeForm(AForm const & form) member function to the Bureau-
crat. It must attempt to execute the form. If it’s successful, print something like:
<bureaucrat> executed <form>
If not, print an explicit error message.
Implement and turn in some tests to ensure everything works as expected.
*/
ShrubberyCreationForm::ShrubberyCreationForm(): _name("Shrubbery"),  _isSigned(false), _gradeForSign(145),_gradeForExec(137)
{
    std::cout << "default constructor " << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : _target(target),_name("Shrubbery"), _isSigned(false), _gradeForSign(145),_gradeForExec(137)
{
    std::cout << "target constructor without bureau" << std::endl;
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
