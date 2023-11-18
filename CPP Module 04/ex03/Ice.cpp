/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:06:51 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/18 15:25:27 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	_type = "ice";
	std::cout << "\033[31mIce Default constructor was called\033[0m\n";
}

Ice::Ice(const Ice &src)
{
	*this = src;
	std::cout << "\033[31mIce Copy constructor was called\033[0m\n";
}

Ice::~Ice()
{
	std::cout << "\033[31mIce destructor was called\033[0m\n";
}

Ice	&Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
