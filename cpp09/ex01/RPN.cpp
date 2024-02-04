/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:31:12 by vnaslund          #+#    #+#             */
/*   Updated: 2024/02/04 17:19:40 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{

}

RPN::~RPN(void)
{

}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other)
{
	(void)other;
	return (*this);
}

bool    RPN::valid_input(const std::string& str)
{
    if (str.find_first_not_of("0123456789+-*/ ") == std::string::npos)
        return (true);
    else
        return (false);
}

long long   RPN::calc(const std::string& str)
{
    int                 left;
    int                 right;
    int                 result;
    std::stringstream   postfix(str);
    std::stack<int>     stack; // stack makes sense for RPN as you can easily know what operation to do when you encounter an +-*/ on the stack
    std::string         token;

    while (postfix >> token) // puts token into i (tokens are determined by whitespace separation)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (stack.size() < 2)
                throw WrongFormat();
            right = stack.top();
            stack.pop();
            left = stack.top();
            stack.pop();
            switch (token.at(0))
            {
                case '+': result =  left + right ; break;
                case '-': result =  left - right ; break;
                case '/':
                    if (right != 0)
                        result =  left / right; 
                    else
                        throw DivisionByZero();
                break;
                case '*': result =  left * right ; break;
            }
            stack.push(result);
        }
        else
            stack.push(std::stoi(token));
    }
    return (stack.top());
}

const char*	RPN::WrongFormat::what() const throw()
{
	return ("RPN exception: Wrongly formatted expression");
}

const char*	RPN::DivisionByZero::what() const throw() {
	return ("RPN exception: division by 0 not possible");
}