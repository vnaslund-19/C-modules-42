/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:58:33 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/23 12:58:34 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
        Point();
        Point(const float x, const float y);
        Point(const Point& src);
        ~Point();

        Point& operator=(const Point& other);
        Fixed   getX(void) const;
        Fixed   getY(void) const;

	private:
        const Fixed _x;
        const Fixed _y;
};

#endif