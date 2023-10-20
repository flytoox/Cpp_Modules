/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:28:53 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/20 22:37:42 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie {
	public:
		~Zombie();
		Zombie();
		Zombie(std::string name);
		void	annonce(void);
		void	setName(std::string name);
	private:
		std::string	name;	
};

Zombie* zombieHorde( int N, std::string name );
#endif