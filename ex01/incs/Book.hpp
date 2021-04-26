/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:03:03 by mroux             #+#    #+#             */
/*   Updated: 2021/04/26 18:04:43 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HPP
# define BOOK_HPP
# include "Contact.hpp"
# include <string>
# include <iomanip>
# include <iostream>
# include <stdlib.h>

class Book
{
	public:
		Book();
		~Book();
		void		add();
		void		search();

	private:
		void		printContacts();
		void		printFullContact(int id);
		Contact		_contacts[8];
		int			_numberOfContact;
};

#endif
