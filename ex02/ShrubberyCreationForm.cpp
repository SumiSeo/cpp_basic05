#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>  

ShrubberyCreationForm::ShrubberyCreationForm(): _name("Shrubbery"),  _isSigned(false), _gradeForSign(145),_gradeForExec(137)
{
    std::cout << "default constructor " << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : _target(target),_name("Shrubbery"), _isSigned(false), _gradeForSign(145),_gradeForExec(137)
{
    
    // if(this->_isSigned)
    //     this->execute(Bureaucrat);
    std::cout << "target constructor " << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target, Bureaucrat const & executor) : _target(target),_name("Shrubbery"), _isSigned(false), _gradeForSign(145),_gradeForExec(137)
{
    
    if(this->_isSigned)
        this->execute(executor);
    std::cout << "target constructor " << std::endl;
};


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //destructor function
    /*
    implement a function to execute the form’s action of the concrete
    classes. You have to check that the form is signed and that the grade of the bureaucrat
    attempting to execute the form is high enough. Otherwise, throw an appropriate excep-
    tion.*/
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    // (void)executor;
    // Check whether it is executable
    // (void)this->_isSigned;
    (void)executor;
    (void)this->_gradeForSign;
    (void)this->_gradeForExec;
      std::string filename = this->_target + ".txt";
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

};
