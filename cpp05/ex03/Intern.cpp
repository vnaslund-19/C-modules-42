/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:44:35 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/25 18:05:01 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	
}

Intern::~Intern()
{
	
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string	formNames[] = {"Robotomy request", "Presidential pardon", "Shrubbery creation"};

	AForm*	forms[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << " form" << std::endl;
			return (forms[i]);
		}
	}
	std::cout << "Intern cannot create " << name << " form" << std::endl;
	return (nullptr);
}
