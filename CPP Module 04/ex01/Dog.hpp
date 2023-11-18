/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:22:50 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/09 18:56:01 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain	*_brain;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &dog);
		Dog	&operator=(const Dog &dog);
		void	makeSound() const;	
};

#endif