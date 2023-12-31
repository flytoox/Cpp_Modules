/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:24:58 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/22 14:16:51 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(Weapon &weapon);
		~HumanA();
		HumanA(std::string name, Weapon &weapon);
		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
	private:
		Weapon &_weapon;
		std::string _name;	
};

#endif