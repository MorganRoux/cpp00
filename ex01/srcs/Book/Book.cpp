/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:03:14 by mroux             #+#    #+#             */
/*   Updated: 2021/04/26 17:16:14 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

Book::Book()
{
	_numberOfContact = 0;
}

Book::~Book()
{

}

void	Book::printContacts()
{
	std::cout << "|     index|    prenom|       nom|    pseudo|\n";
	for (int i = 0; i < _numberOfContact; i++)
		_contacts[i].shortPrint();
}

void	Book::printFullContact(int id)
{
	if (id >= _numberOfContact)
	{
		std::cout << "Index inconnu\n";
		return ;
	}
	_contacts[id].describe();
}

void	Book::add()
{
	if (_numberOfContact == 8)
	{
		std::cout << "Book full\n";
		return ;
	}
	_contacts[_numberOfContact].init(_numberOfContact);
	_numberOfContact++;
}

void	Book::search()
{
	std::string	id;

	printContacts();
	std::cout << "Index ? ";
	std::getline(std::cin, id);
	printFullContact(atoi(id.c_str()));
}
