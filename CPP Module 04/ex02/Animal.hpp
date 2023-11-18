/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:13:42 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/09 22:14:16 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();
		Animal	&operator=(const Animal &animal);
		std::string	getType() const;
		virtual void	makeSound() const = 0;
};
#endif