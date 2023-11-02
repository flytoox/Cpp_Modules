/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:51:40 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/02 21:13:11 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int			_health;
		int			_energy;
		int			_attack;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &ct);
		void    operator=(const ClapTrap &ct);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string getName() const;
		void		setName(std::string name);
		int			getHealth() const;
		void		setHealth(int Health);
		int			getEnergy() const;
		void		setEnergy(int Energy);
		int			getAttack() const;
		void		setAttack(int Attack);
};

#endif