/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:55:21 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/02 21:13:59 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}


ClapTrap::ClapTrap(std::string name):_name(name) {}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap(const ClapTrap &ct) {
	*this = ct;
}

void	ClapTrap::operator=(const ClapTrap &ct) {
	_name = ct.getName();
	_health = ct.getHealth();
	_energy = ct.getEnergy();
	_attack = ct.getAttack();
}

std::string ClapTrap::getName() const{
	return _name;
}
void		ClapTrap::setName(std::string name) {
	_name = name;
}
int			ClapTrap::getHealth() const{
	return _health;
}
void		ClapTrap::setHealth(int Health) {
	_health = Health;
}
int			ClapTrap::getEnergy() const{
	return _energy;
}
void		ClapTrap::setEnergy(int Energy) {
	_energy = Energy;
}
int			ClapTrap::getAttack() const{
	return _attack;
}
void		ClapTrap::setAttack(int Attack) {
	_attack = Attack;
}