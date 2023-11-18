/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:22:47 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/16 21:03:14 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[31mDog Default constructor was called\033[0m\n";
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "\033[31mDog destructor was called\033[0m\n";
}

Dog::Dog(const Dog &dog)
{
	std::cout << "\033[31mDog Copy constructor was called\033[0m\n";
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this == &dog)
		return *this;
	_type = dog._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog is Barking\n";
}