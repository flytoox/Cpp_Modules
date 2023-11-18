/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:15 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/09 11:29:38 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\033[31mWrongAnimal Default constructor was called\033[0m\n";
	_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[31mWrongAnimal destructor was called\033[0m\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	std::cout << "\033[31mWrongAnimal Copy constructor was called\033[0m\n";
	*this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	if (this == &animal)
		return *this;
	_type = animal._type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is talking\n";
}