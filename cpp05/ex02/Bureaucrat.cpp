/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:32:43 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/25 16:50:09 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void)
{
	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void)
{
	
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void		Bureaucrat::incrementGrade(void)
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void		Bureaucrat::decrementGrade(void)
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

const	char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("You have set the grade too high, the highest allowed grade is 1");
}

const	char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("You have set the grade too low, the lowest allowed grade is 150");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (o);
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << _name << " succesfully signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Bureaucrat " << _name << " failed to sign " << form.getName() << std::endl;
	}
}

void    Bureaucrat::executeForm(const AForm& form) const
{
    try {
        form.execute(*this); } 
	catch ( std::exception& e ) {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl; }
}
