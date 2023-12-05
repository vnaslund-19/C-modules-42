/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:57:10 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 18:12:23 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main(void)
{
	string str = "HI THIS IS MY BRAIN";
	string* stringPTR = &str;
	string& stringREF = str;

	cout << "The memory address of the string variable: " << &str << endl;
	cout << "The memory address held by stringPTR: " << stringPTR << endl;
	cout << "The memory address held by stringREF: " << &stringREF << endl;

	cout << endl;

	cout << "Value of string variable: " << str << endl;
	cout << "Value pointed to by stringPTR: " << *stringPTR << endl;
	cout << "Value pointed to by stringREF: " << stringREF << endl;
}
