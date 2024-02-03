/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:31:16 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/29 19:31:16 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <exception>
# include <stack>
# include <sstream>

class RPN
{
    public:
        RPN();
        ~RPN();
        RPN(const RPN& other);
        RPN&    operator=(const RPN& other);

        static bool valid_input(const std::string& str);
        static long long    calc(const std::string& str);

        class WrongFormat : public std::exception
        {
            public:
                virtual const char* what() const throw();  
        };

        class DivisionByZero : public std::exception 
        {
            public:
                virtual const char* what() const throw();  
        };
};

#endif