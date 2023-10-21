/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:12:48 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/21 21:07:33 by obelaizi         ###   ########.fr       */
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
	void (Harl::* lvl) (void) ;
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; i < 4 && lvls[i] != level;i++);
	switch (i)
	{
		case 0:
			lvl = &Harl::debug;
			(this->*lvl)();
			break;
		case 1:
			lvl = &Harl::info;
			(this->*lvl)();
			break;
		case 2:
			lvl = &Harl::warning;
			(this->*lvl)();
			break;
		case 3:
			lvl = &Harl::error;
			(this->*lvl) ();
			break;
		default:
			std::cout<<"[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout<< "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
}
