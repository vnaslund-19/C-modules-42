/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:10:57 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/04 18:19:13 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iomanip>

class Phonebook
{
public:
	Phonebook();
	~Phonebook();
	
	void		addContact();
	void		searchContact();
	void		printContact(Contact contact);
	void		listContact(Contact contact);
	std::string	truncateStr(std::string str);

private:
	Contact contacts[8];
	int		nbrOfContacts;
	int		oldestContact;
};

#endif