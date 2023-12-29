/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:46:06 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 18:32:34 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	if (bsp(Point(0, 0), Point(10, 0), Point(5, 10), Point(5, 5.01)) == true)
		std::cout << "The Point IS inside the triangle" << std::endl;
	else
		std::cout << "The Point is NOT inside the triangle" << std::endl;
	return (0);
}
