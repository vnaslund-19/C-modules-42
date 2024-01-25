/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:24:36 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/25 18:13:20 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern	intern;
	AForm*	form;

	form = intern.makeForm("Presidential pardon", "target");
	if (form == nullptr)
		return (1);
    
	try 
	{
        Bureaucrat bureaucrat("Test", 139); // change grade to test errors

        std::cout << "\n--------------- Intern created form ---------------" << std::endl;
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    } 
	catch (std::exception &e) {
        std::cerr << e.what() << std::endl; }
	
	delete (form);
    return (0);
}