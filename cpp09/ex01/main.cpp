/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:31:21 by vnaslund          #+#    #+#             */
/*   Updated: 2024/02/04 13:57:20 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "This program accepts exactly 1 string argument containing an inverted Polish mathematical expression" << std::endl;
        return (EXIT_FAILURE);
    }

    RPN rpn;

    if (rpn.valid_input(argv[1]))
    {
        try
        {std::cout << rpn.calc(argv[1]) << std::endl;}
        catch (std::exception& e)
        {std::cerr << e.what() << std::endl;}
        return (EXIT_SUCCESS);
    }
    else
    {
        std::cerr << "Please only enter numbers between 0-9 and the valid operands +-*/" << std::endl;
        return (EXIT_FAILURE);
    }
}