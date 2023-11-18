/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:22:47 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/16 21:02:22 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[31mCat Default constructor was called\033[0m\n";
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "\033[31mCat destructor was called\033[0m\n";
}

Cat::Cat(const Cat &cat)
{
	std::cout << "\033[31mCat Copy constructor was called\033[0m\n";
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return *this;
	_type = cat._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat is Meowing\n";
}