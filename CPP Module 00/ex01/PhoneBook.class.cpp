/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:53:09 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/18 19:58:40 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->nb_contacts = 0;
	this->index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_contact(void)
{
	if (this->index == 8)
		this->index = 0;
	
	std::cout<<"First name: ";
	std::getline(std::cin, this->contacts[this->index].first_name);
	while (this->contacts[this->index].first_name.empty())
	{
		std::cout<<"First name: ";
		std::getline(std::cin, this->contacts[this->index].first_name);
	}
	
	std::cout<<"Last name: ";
	std::getline(std::cin, this->contacts[this->index].last_name);
	while (this->contacts[this->index].last_name.empty())
	{
		std::cout<<"Last name: ";
		std::getline(std::cin, this->contacts[this->index].last_name);
	}
	
	std::cout<<"Nickname: ";
	std::getline(std::cin, this->contacts[this->index].nickname);
	while (this->contacts[this->index].nickname.empty())
	{
		std::cout<<"Nickname: ";
		std::getline(std::cin, this->contacts[this->index].nickname);
	}
	
	std::cout<<"Phone number: ";
	std::getline(std::cin, this->contacts[this->index].phone_number);
	while (this->contacts[this->index].phone_number.empty())
	{
		std::cout<<"Phone number: ";
		std::getline(std::cin, this->contacts[this->index].phone_number);
	}
	
	std::cout<<"Darkest secret: ";
	std::getline(std::cin, this->contacts[this->index].darkest_secret);
	while (this->contacts[this->index].darkest_secret.empty())
	{
		std::cout<<"Darkest secret: ";
		std::getline(std::cin, this->contacts[this->index].darkest_secret);
	}
	this->index++;
	if (this->nb_contacts < 8)
		this->nb_contacts++;
}

void	PhoneBook::search_contact(void)
{
	if (this->nb_contacts == 0)
	{
		std::cout << "No contacts." << std::endl;
		return ;
	}
	std::string		input;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->nb_contacts; i++)
	{
		std::cout << "|"<< std::setw(10) << i << "|";
		if (this->contacts[i].first_name.length() > 10)
			std::cout << this->contacts[i].first_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].first_name << "|";
		if (this->contacts[i].last_name.length() > 10)
			std::cout << this->contacts[i].last_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].last_name << "|";
		if (this->contacts[i].nickname.length() > 10)
			std::cout << this->contacts[i].nickname.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].nickname << "|";
		std::cout << std::endl;
	}
	std::cout << "Enter an index: ";
	std::getline(std::cin, input);
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
	{
		int		index = input[0] - '0';
		std::cout << "First name: " << this->contacts[index].first_name << std::endl;
		std::cout << "Last name: " << this->contacts[index].last_name << std::endl;
		std::cout << "Nickname: " << this->contacts[index].nickname << std::endl;
		std::cout << "Phone number: " << this->contacts[index].phone_number << std::endl;
		std::cout << "Darkest secret: " << this->contacts[index].darkest_secret << std::endl;
	}
	else
		std::cout << "Wrong index." << std::endl;
}