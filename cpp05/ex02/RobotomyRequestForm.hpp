/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:11:47 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/25 16:41:48 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void	execute(const Bureaucrat &executor) const;

	private:
		const std::string	_target;
		RobotomyRequestForm();
};

#endif