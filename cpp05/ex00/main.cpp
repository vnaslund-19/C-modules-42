/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:24:36 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/23 14:51:40 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>

int	main(void)
{
	std::string	input;
	std::string	gradeInput;
	int			grade;

	std::cout << "Enter the bureaucrats name: ";
	std::getline(std::cin, input);
	while (true)
	{
        std::cout << "Enter the bureaucrat's grade: ";
        std::string gradeInput;
        std::getline(std::cin, gradeInput);
        try 
		{
            grade = std::stoi(gradeInput);
			if (grade < 1 || grade > 150)
			{
				std::cout << "Please enter a valid grade {1-150}\n";
				continue ;
			}
            break ;
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Invalid input, please enter a valid integer for grade.\n"; }
        catch (const std::out_of_range& e) {
            std::cerr << "Grade is out of range, please enter a valid integer for grade.\n"; }
    }
    Bureaucrat bureaucrat(input, grade);

	while (1)
	{
    	std::cout << "Enter + to increment, - to decrement the grade or EXIT to end the program > ";
   		std::getline(std::cin, input);
    	if (input == "+")
		{
        	try {
            	bureaucrat.incrementGrade(); }
         	catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << e.what() << std::endl; }
    	} 
		else if (input == "-") 
		{
        	try {
            	bureaucrat.decrementGrade(); }
        	catch (const Bureaucrat::GradeTooLowException& e) {
            	std::cerr << e.what() << std::endl; }
   		} 	
		else if (input == "EXIT")
        	break ;
    	else 
		{
        	std::cout << "Invalid command" << std::endl;
        	continue;
    	}
    	std::cout << bureaucrat;
	}
}