/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:28:35 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/21 14:04:17 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		~HumanB();
		HumanB(std::string name);
		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
	private:
		Weapon *_weapon;
		std::string _name;	
};

#endif