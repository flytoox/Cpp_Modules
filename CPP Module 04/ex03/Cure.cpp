/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:57:04 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/18 15:25:30 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	_type = "cure";
	std::cout << "\033[31mCure Default constructor was called\033[0m\n";
}

Cure::Cure(const Cure &src)
{
	*this = src;
	std::cout << "\033[31mCure Copy constructor was called\033[0m\n";
}

Cure::~Cure()
{
	std::cout << "\033[31mCure destructor was called\033[0m\n";
}

Cure	&Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
