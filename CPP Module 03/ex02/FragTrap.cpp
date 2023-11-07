/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:10:16 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/07 19:38:19 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default Constructor was called\n";
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Parameterized Constructor was called\n";
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor was called\n";
}

FragTrap::FragTrap(const FragTrap &ct) : ClapTrap(ct)
{
	*this = ct;
	std::cout << "FragTrap Copy Constructor was called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &ct)
{
	if (this == &ct)
		return *this;
	_name = ct._name;
	_health = ct._health;
	_energy = ct._energy;
	_attack = ct._attack;
	std::cout << "FragTrap Assignement Constructor was called\n";
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (!_energy || !_health)
	{
		std::cout << _name << " Either You are dead or You have no energy points to be repaired\n";
		return;
	}
	_energy--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!\n";
}

void FragTrap::highFivesGuy()
{
	std::cout << "FragTrap " << _name << " High five! ✋" << std::endl;
}
