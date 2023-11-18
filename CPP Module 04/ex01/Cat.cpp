/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:22:47 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/18 16:23:10 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[31mCat Default constructor was called\033[0m\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "\033[31mCat destructor was called\033[0m\n";
}

Cat::Cat(const Cat &cat)
{
	std::cout << "\033[31mCat Copy constructor was called\033[0m\n";
	_brain = new Brain(*cat._brain);
	_type = cat._type;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return *this;
	_type = cat._type;
	delete _brain;
	_brain = new Brain(*cat._brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat is Meowing\n";
}