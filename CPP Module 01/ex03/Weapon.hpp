/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:22:20 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/21 13:45:25 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon();
		~Weapon();
		Weapon(std::string type);
		const std::string	&getType(void) const;
		void	setType(std::string type);
	private:
		std::string _type;
};

#endif