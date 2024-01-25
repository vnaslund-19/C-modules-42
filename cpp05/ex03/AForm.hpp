/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:20:32 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/24 19:30:54 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string name, int signGrade, int execGrade);
		virtual ~AForm();

		std::string	getName(void) const;
		int			getExecGrade(void) const;
		int			getSignGrade(void) const;
		bool		getSign(void) const;
		void		beSigned(const Bureaucrat &bureaucrat);

		// To make abstract
		virtual void	execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class FormNotSignedException : public std::exception 
		{
       		public:
            	virtual const char* what() const throw();
    	};
	
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;

};

std::ostream & operator<<(std::ostream & o, AForm const &form);

#endif