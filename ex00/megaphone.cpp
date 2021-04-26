/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:08:50 by mroux             #+#    #+#             */
/*   Updated: 2021/04/26 14:26:03 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int		main (int argc, char *argv[])
{
	std::locale loc;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		int		i = 1;
		while (i < argc)
		{
			std::string str = argv[i];
			for (std::string::size_type j=0; j<str.length(); j++)
    			std::cout << std::toupper(str[j],loc);
			std::cout << ( i == argc - 1 ? "\n" : " ");
			i++;
		}
	}
}
