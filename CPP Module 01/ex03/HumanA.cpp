/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:29:32 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/22 14:17:00 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

HumanA::~HumanA()
{
}

HumanA::HumanA(Weapon &weapon): _weapon(weapon)
{
}

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name)
{
}