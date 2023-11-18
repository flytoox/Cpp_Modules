/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:15 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/16 21:05:19 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\033[31mAnimal Default constructor was called\033[0m\n";
	_type = "Animal";
}

Animal::~Animal()
{
	std::cout << "\033[31mAnimal destructor was called\033[0m\n";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "\033[31mAnimal Copy constructor was called\033[0m\n";
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	if (this == &animal)
		return *this;
	_type = animal._type;
	return *this;
}

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "Animal is talking\n";
}