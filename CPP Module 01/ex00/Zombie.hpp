/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:02:40 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/20 22:21:10 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie {
	public:
		~Zombie();
		Zombie(std::string name);
		void	annonce(void);
	private:
		std::string	name;	
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif