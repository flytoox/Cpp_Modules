/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:09:03 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/19 18:06:20 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void)
{
	std::string		input;
	PhoneBook		phonebook;

	while (1)
	{
		std::cout << std::endl<< "\033[1;32m";
		std::cout << "Commands: ADD, SEARCH, EXIT\033[0m" << std::endl;
		std::cout << "Enter a command: " << std::endl << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			clearerr(stdin);
			std::cin.clear();
		}
		else if (input == "EXIT")
			exit (0);
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Wrong command." << std::endl;
	}
	return (0);
}