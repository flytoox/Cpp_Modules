/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:55:21 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/07 19:37:03 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _health(10),_energy(10),_attack(0) {
	std::cout << "ClapTrap Default Constructor was called\n";
}


ClapTrap::ClapTrap(std::string name):_name(name), _health(10),_energy(10),_attack(0)  {
	std::cout << "ClapTrap Parameterized Constructor was called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor was called\n";
}


ClapTrap::ClapTrap(const ClapTrap &ct) {
	*this = ct;
	std::cout << "ClapTrap Copy Constructor was called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &ct) {
	if (this == &ct) 
            return *this;
	_name = ct._name;
	_health = ct._health;
	_energy = ct._energy;
	_attack = ct._attack;
	std::cout << "ClapTrap Assignement Constructor was called\n";
	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	if (!_energy || !_health) {
		std::cout << _name << " Either You are dead or You have no energy points to attack\n";
		return;
	}
	_energy--;
	std::cout << "ClapTrap " << _name << " attacks " << target<< ", causing " << _attack<< " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!_health) {
		std::cout << _name << " is Already dead \n";
		return;
	}
	amount > _health ?  _health = 0 : _health -= amount;  
	std::cout << "ClapTrap " << _name << " Take Damage " << amount<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!_energy || !_health) {
		std::cout << _name << " Either You are dead or You have no energy points to be repaired\n";
		return;
	}
	_health += amount;
	_energy--;
	std::cout << "ClapTrap " << _name << " Repair " << amount<< std::endl;
}
