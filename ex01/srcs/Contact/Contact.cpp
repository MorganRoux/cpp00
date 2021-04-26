/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:35:15 by mroux             #+#    #+#             */
/*   Updated: 2021/04/26 15:58:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::init(int id)
{
	_id = id;
	std::cout << "First name ? ";
	std::getline(std::cin, _firstName);
	std::cout << "Last name ? ";
	std::getline(std::cin, _lastName);
	std::cout << "Nick name ? ";
	std::getline(std::cin, _nickName);
	std::cout << "Login ? ";
	std::getline(std::cin, _login);
	std::cout << "Postal ? ";
	std::getline(std::cin, _postal);
	std::cout << "Adress ? ";
	std::getline(std::cin, _address);
	std::cout << "Email? ";
	std::getline(std::cin, _email);
	std::cout << "Phone number ? ";
	std::getline(std::cin, _phoneNumber);
	std::cout << "Birthday ? ";
	std::getline(std::cin, _birthday);
	std::cout << "Favorite Meal ? ";
	std::getline(std::cin, _favoriteMeal);
	std::cout << "Underwear color ? ";
	std::getline(std::cin, _underwearColor);
	std::cout << "Darkest  secret ? ";
	std::getline(std::cin, _darkestSecret);
}
void	Contact::describe()
{
		std::cout << "Id : " << std::to_string(_id) << "\n";
		std::cout << "First name : " << _firstName << "\n";
		std::cout << "Last name : " << _lastName << "\n";
		std::cout << "Nick name : " << _nickName << "\n";
		std::cout << "Login : " << _login << "\n";
		std::cout << "Postal : " << _postal << "\n";
		std::cout << "Adress : " << _address << "\n";
		std::cout << "Email : " << _email << "\n";
		std::cout << "Phone : " << _phoneNumber << "\n";
		std::cout << "Birthday : " << _birthday << "\n";
		std::cout << "Favorite meal : " << _favoriteMeal << "\n";
		std::cout << "Underwear color : " << _underwearColor << "\n";
		std::cout << "Darkest secret : " << _darkestSecret << "\n";
}

void	Contact::shortPrint()
{
	std::cout << "|"  << std::setw(10) << std::to_string(_id);
	std::cout << "|" << std::setw(10) << _firstName.substr(0,9);
	std::cout << "|"  << std::setw(10) << _lastName.substr(0,9);
	std::cout << "|" << std::setw(10) << _nickName.substr(0,9);
	std::cout << "|\n";
}
