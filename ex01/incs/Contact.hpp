/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:02:20 by mroux             #+#    #+#             */
/*   Updated: 2021/04/26 17:07:54 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void			shortPrint();
		void			describe();
		void			init(int id);

	private:
		int				_id;
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickName;
		std::string		_login;
		std::string		_postal;
		std::string		_address;
		std::string		_email;
		std::string		_phoneNumber;
		std::string		_birthday;
		std::string		_favoriteMeal;
		std::string		_underwearColor;
		std::string		_darkestSecret;
};

#endif
