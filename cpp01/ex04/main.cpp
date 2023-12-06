/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:29:50 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/06 15:01:14 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
using namespace	std;

int	replace(char **av, string str);

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		cout << "This program takes 3 parameters: filename : s1 : s2\n"
			 << "The goal of the program is to replace all occurences of s1 with s2" << endl;
		return (0);
	}
	ifstream	infile;

	infile.open(av[1]);
	if (infile.fail())
	{
		cout << "Error opening file: " << av[1] << endl;
		return (1);
	}
	stringstream	buffer;

	buffer << infile.rdbuf();
	string	file_contents;
	file_contents = buffer.str();
	infile.close();
	return (replace(av, file_contents));
}

int	replace(char **av, string content)
{
	ofstream	outfile;
	int			i = 0;

	while ((i = content.find(av[2], i)) != string::npos)
	{
		content.replace(i, strlen(av[2]), av[3]);
		i += strlen(av[3]);
	}

	outfile.open((string)av[1] + ".replace");
	if (outfile.fail())
	{
		cout << "Error creating outfile" << endl;
		return (1);
	}
	outfile << content;
	outfile.close();
	cout << "Replacement complete! Result stored in file " << av[1] << ".replace" << endl;
	return (0);
}
