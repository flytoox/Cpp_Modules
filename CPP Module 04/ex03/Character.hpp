/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:08:55 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/13 18:21:37 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string		_name;
		AMateria		*_inventory[4];
		int				_nb_materia;
		int				_deleted_materia;
		AMateria		*_delete_inventory[40];
	public:
		Character();
		Character(std::string const & name);
		Character(const Character &src);
		virtual ~Character();
		Character	&operator=(const Character &rhs);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif