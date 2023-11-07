/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:10:16 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/07 19:27:27 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap Default Constructor was called\n";
	_health = 100;
	_energy = 50;
	_attack = 20;
}


ScavTrap::ScavTrap(std::string name):ClapTrap(name) {
	std::cout << "ScavTrap Parameterized Constructor was called\n";
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor was called\n";
}


ScavTrap::ScavTrap(const ScavTrap &ct): ClapTrap(ct) {
	*this = ct;
	std::cout << "ScavTrap Copy Constructor was called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &ct) {
	if (this == &ct)
		return *this;
	_name = ct._name;
	_health = ct._health;
	_energy = ct._energy;
	_attack = ct._attack;
	std::cout << "ScavTrap Assignement Constructor was called\n";
	return *this;
}

void	ScavTrap::attack(const std::string &target) {
	if (!_energy || !_health) {
		std::cout << _name << " Either You are dead or You have no energy points to be repaired\n";
		return;
	}
	_energy--;
	std::cout << "ScavTrap " << _name << " attacks " << target<< ", causing " << _attack<< " points of damage!\n";
}

void	ScavTrap::guardGate() {
	std::cout <<"ScavTrap " << _name << " is now in Gate keeper mode\n";
}
