/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:12:48 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/22 11:59:21 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{	
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	void (Harl::* lvl[4]) (void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; i < 4 && lvls[i] != level;i++);
	switch (i)
	{
		case 0:
			(this->*lvl[i])();
			break;
		case 1:
			(this->*lvl[i])();
			break;
		case 2:
			(this->*lvl[i])();
			break;
		case 3:
			(this->*lvl[i]) ();
			break;
		default:
			std::cout<<"[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

void	Harl::debug(void)
{
	std::cout<< "[ DEBUG ]\n";
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void	Harl::info(void)
{
	std::cout<<"[ INFO ]\n";
	std::cout<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
	std::cout<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"[ WARNING ]\n";
	std::cout<<"I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n";
	std::cout<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"[ ERROR ]\n";
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
	std::cout<<std::endl;
}
