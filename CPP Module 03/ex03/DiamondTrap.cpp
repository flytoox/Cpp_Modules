/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:10:16 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/07 19:41:21 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(){
	std::cout << "DiamondTrap Default Constructor was called\n";
	_health = 100;
	_energy = 50;
	_attack = 30;
}


DiamondTrap::DiamondTrap(std::string name):ClapTrap(name+ "_clap_name")  {
	std::cout << "DiamondTrap Parameterized Constructor was called\n";
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 30;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor was called\n";
}


DiamondTrap::DiamondTrap(const DiamondTrap &ct) {
	*this = ct;
	std::cout << "DiamondTrap Copy Constructor was called\n";
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &ct) {
	if (this == &ct)
		return *this;
	ClapTrap::_name = ct.ClapTrap::_name;
	_name = ct._name;
	_health = ct._health;
	_energy = ct._energy;
	_attack = ct._attack;
	std::cout << "DiamondTrap Assignement Constructor was called\n";
	return *this;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void 	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name is "<< _name << ", ClapTrap Name is " << ClapTrap::_name << std::endl;
}