/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:50:48 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 12:11:51 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	nbrOfContacts = 0;
	oldestContact = 0;
}
Phonebook::~Phonebook()
{
	std::cout << "Goodbye!" << std::endl;
}

void	Phonebook::addContact()
{
	std::string	input;
	int			index;

	if (nbrOfContacts == 8)
	{
		index = oldestContact;
		if (oldestContact == 7)
			oldestContact = 0;
		else
			oldestContact++;
	}
	else
		index = nbrOfContacts;
	
	std::cout << "Please enter the contacts first name: ";
	while (input.empty())
		std::getline(std::cin, input);
	contacts[index].setFirstName(input);

	std::cout << "Please enter the contacts last name: ";
	std::getline(std::cin, input);
	contacts[index].setLastName(input);

	std::cout << "Please enter the contacts nickname: ";
	std::getline(std::cin, input);
	contacts[index].setNickName(input);

	std::cout << "Please enter the contacts phone number: ";
	std::getline(std::cin, input);
	contacts[index].setPhone(input);

	std::cout << "Please enter the contacts darkest secret: ";
	std::getline(std::cin, input);
	contacts[index].setSecret(input);

	if (nbrOfContacts < 8)
	{
		std::cout << "Contact was succesfully added 👏🏼" << std::endl;
		nbrOfContacts++;
	}
	else
		std::cout << "Contact was succesfully added, replacing contact: " << index + 1 << std::endl;
}

void	Phonebook::searchContact()
{
	if (nbrOfContacts == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}

	std::cout << "|" << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First name" << "|"
			  << std::setw(10) << "Last name" << "|" 
			  << std::setw(10) << "Nickname" << "|" << std::endl;
	
	for (int i = 0; i < nbrOfContacts; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		printContact(contacts[i]);
	}

	int	index;
	while (true)
	{
		std::cout << "Enter the index of the contact you want to display: ";
		if (std::cin >> index && index >= 1 && index <= 8 && !contacts[index - 1].getFirstName().empty())
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			listContact(contacts[index - 1]);
			break ;
		}
		else
		{
			std::cout << "\nInvalid input, please enter a valid index\n" << std::endl;
			std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}
std::string	Phonebook::truncateStr(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	Phonebook::printContact(Contact contact)
{
	std::cout << std::setw(10) << truncateStr(contact.getFirstName()) << "|"
			  << std::setw(10) << truncateStr(contact.getLastName()) << "|"
			  << std::setw(10) << truncateStr(contact.getNickName()) << "|"
			  << std::endl;
}

void	Phonebook::listContact(Contact contact)
{
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickName() << std::endl;
	std::cout << "Phone number : " << contact.getPhone() << std::endl;
	std::cout << "Darkest secret: " << contact.getSecret() << std::endl;
}
