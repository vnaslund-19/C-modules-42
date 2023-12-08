/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:47:01 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 13:27:47 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);

		Fixed&	operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					int_num;
		static const int	constNum = 8;
};

#endif