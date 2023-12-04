/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:12:51 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/04 16:05:14 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void		Contact::setFirstName(std::string str)
{
	_firstname = str;
}

void		Contact::setLastName(std::string str)
{
	_lastname = str;
}

void		Contact::setNickName(std::string str)
{
	_nickname = str;
}

void		Contact::setPhone(std::string str)
{
	_phone = str;
}

void		Contact::setSecret(std::string str)
{
	_secret = str;
}

std::string	Contact::getFirstName(void)
{
	return (_firstname);
}

std::string	Contact::getLastName(void)
{
	return (_lastname);
}

std::string	Contact::getNickName(void)
{
	return (_nickname);
}

std::string	Contact::getPhone(void)
{
	return (_phone);
}

std::string	Contact::getSecret(void)
{
	return (_secret);
}
