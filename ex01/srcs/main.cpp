/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:37:25 by mroux             #+#    #+#             */
/*   Updated: 2021/04/26 16:55:11 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void	exec_loop()
{
	std::string		input;
	Book			book;
	bool			loop = 1;

	while (loop)
	{
		std::cout << "Commande >> ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			book.add();
		else if (input.compare("SEARCH") == 0)
			book.search();
		else if (input.compare("EXIT") == 0)
			loop = 0;
	}
}

int		main(int argc, char *argv[])
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Error command\n";
		return (0);
	}
	exec_loop();
	return (0);
}
