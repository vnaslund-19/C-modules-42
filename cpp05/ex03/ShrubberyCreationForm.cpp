/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:38:16 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/25 16:53:59 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getSign() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream file( this->getName() + "_shrubbery" );
    	file << "                      ___" << std::endl;
    	file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    	file << "             ,-'          __,,-- \\" << std::endl;
    	file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    	file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    	file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    	file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    	file << "     (     ,-'                  `." << std::endl;
    	file << "      `._,'     _   _             ;" << std::endl;
    	file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    	file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    	file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    	file << "                \"Hb HH dF" << std::endl;
    	file << "                 \"HbHHdF" << std::endl;
    	file << "                  |HHHF" << std::endl;
   		file << "                  |HHH|" << std::endl;
    	file << "                  |HHH|" << std::endl;
    	file << "                  |HHH|" << std::endl;
   		file << "                  |HHH|" << std::endl;
    	file << "                  dHHHb" << std::endl;
    	file << "                .dFd|bHb.               o" << std::endl;
    	file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    	file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    	file << "##########################################" << std::endl;
    	file.close();
	}
}