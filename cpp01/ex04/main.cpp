/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:29:50 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 14:06:05 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	replace(char **av, std::string str);

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "This program takes 3 parameters: filename : s1 : s2\n"
			 << "The goal of the program is to replace all occurences of s1 with s2" << std::endl;
		return (0);
	}
	std::ifstream	infile;

	infile.open(av[1]);
	if (infile.fail())
	{
		std::cout << "Error opening file: " << av[1] << std::endl;
		return (1);
	}
	std::stringstream	buffer;

	buffer << infile.rdbuf();
	std::string	file_contents;
	file_contents = buffer.str();
	infile.close();
	return (replace(av, file_contents));
}

int	replace(char **av, std::string content)
{
	std::ofstream	outfile;
	int			i = 0;
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	newContent;

	while (i < content.length())
	{
		if (content.substr(i, s1.length()) == s1)
		{
			newContent += s2;
			i += s1.length();
		}
		else
		{
			newContent += content[i];
			i++;
		}
	}

	outfile.open((std::string)av[1] + ".replace");
	if (outfile.fail())
	{
		std::cout << "Error creating outfile" << std::endl;
		return (1);
	}
	outfile << newContent;
	outfile.close();
	std::cout << "Replacement complete! Result stored in file " << av[1] << ".replace" << std::endl;
	return (0);
}
