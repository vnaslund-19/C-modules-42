/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:24:01 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/24 19:06:05 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _signGrade(1), _execGrade(1)
{
	_signed = false;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	_signed = false;
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

AForm::~AForm(void)
{
	
}

std::string	AForm::getName(void) const
{
	return (_name);
}

int	AForm::getExecGrade(void) const
{
	return (_execGrade);
}

int	AForm::getSignGrade(void) const
{
	return (_signGrade);
}

bool	AForm::getSign(void) const
{
	return (_signed);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const	char* AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high, the highest allowed grade is 150");
}

const	char* AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low to be able to sign the form");
}

const	char* AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low to be able to sign the form");
}

const	char* AForm::FormNotSignedException::what() const throw()
{
	return ("The form is not signed");
}

std::ostream &operator<<(std::ostream &o, AForm const &form)
{
	o << form.getName() << " requires grade " << form.getSignGrade() << " to sign and "
	  << form.getExecGrade() << " to execute. ";
	
	if (form.getSign())
		o << "The form has been signed";
	else
		o << "The form has not been signed";
	o << std::endl;
	return (o);
}