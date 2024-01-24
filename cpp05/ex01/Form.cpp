/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:53:52 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/24 18:02:17 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _signGrade(1), _execGrade(1)
{
	_signed = false;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	_signed = false;
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
	
}

std::string	Form::getName(void) const
{
	return (_name);
}

int			Form::getExecGrade(void) const
{
	return (_execGrade);
}

int			Form::getSignGrade(void) const
{
	return (_signGrade);
}

bool	Form::getSign(void) const
{
	return (_signed);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const	char* Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high, the highest allowed grade is 150");
}

const	char* Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low to be able to sign the form");
}

std::ostream &operator<<(std::ostream &o, Form const &form)
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