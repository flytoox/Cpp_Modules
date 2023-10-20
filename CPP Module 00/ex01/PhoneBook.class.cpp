/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:53:09 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/19 18:03:57 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#define HANDLE_EOF (std::cin.eof() ? (clearerr(stdin),std::cin.clear(),std::cout<<std::endl) : std::cout<<"");
		

PhoneBook::PhoneBook(void) : nb_contacts(0), index(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_contact(void)
{
	if (index == 8)
		index = 0;
	
	do {
		std::cout<<"First name: ";
		std::getline(std::cin, contacts[index].first_name);
		HANDLE_EOF
	} while (contacts[index].first_name.empty());
	
	do {
		std::cout<<"Last name: ";
		std::getline(std::cin, contacts[index].last_name);
		HANDLE_EOF
	} while (contacts[index].last_name.empty());
	
	do {
		std::cout<<"Nickname: ";
		std::getline(std::cin, contacts[index].nickname);
		HANDLE_EOF
	} while (contacts[index].nickname.empty());
	
	do {
		std::cout<<"Phone number: ";
		std::getline(std::cin, contacts[index].phone_number);
		HANDLE_EOF
		for (int i = 0; i < (int)contacts[index].phone_number.length(); i++)
			if (!std::isdigit(contacts[index].phone_number[i]))
			{
				std::cout << "Phone number not Phone character" << std::endl;
				contacts[index].phone_number.clear();
				break ;
			}
	} while (contacts[index].phone_number.empty());
	
	do {
		std::cout<<"Darkest secret: ";
		std::getline(std::cin, contacts[index].darkest_secret);
		HANDLE_EOF
	} while (contacts[index].darkest_secret.empty());
	index++;
	if (nb_contacts < 8)
		nb_contacts++;
}

void	PhoneBook::search_contact(void)
{
	if (nb_contacts == 0)
	{
		std::cout << "No contacts." << std::endl;
		return ;
	}
	std::string		input;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < nb_contacts; i++)
	{
		std::cout << "|"<< std::setw(10) << i+1 << "|";
		if (contacts[i].first_name.length() > 10)
			std::cout << contacts[i].first_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contacts[i].first_name << "|";
		if (contacts[i].last_name.length() > 10)
			std::cout << contacts[i].last_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contacts[i].last_name << "|";
		if (contacts[i].nickname.length() > 10)
			std::cout << contacts[i].nickname.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contacts[i].nickname << "|";
		std::cout << std::endl;
	}
	std::cout << "Enter an index: ";
	std::getline(std::cin, input);
	HANDLE_EOF
	if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
	{
		int		index = input[0] - '1';
		std::cout << "First name: " << contacts[index].first_name << std::endl;
		std::cout << "Last name: " << contacts[index].last_name << std::endl;
		std::cout << "Nickname: " << contacts[index].nickname << std::endl;
		std::cout << "Phone number: " << contacts[index].phone_number << std::endl;
		std::cout << "Darkest secret: " << contacts[index].darkest_secret << std::endl;
	}
	else
		std::cout << "Wrong index." << std::endl;
}