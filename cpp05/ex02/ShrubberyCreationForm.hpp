/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:28:35 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/25 16:41:46 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONSFORM_HPP
# define SHRUBBERYCREATIONSFORM_HPP

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void	execute(const Bureaucrat &executor) const;

	private:
		const std::string	_target;
		ShrubberyCreationForm();
};

#endif