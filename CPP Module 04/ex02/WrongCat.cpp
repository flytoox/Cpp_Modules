/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:22:47 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/09 11:29:55 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "\033[31mWrongCat Default constructor was called\033[0m\n";
	_type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "\033[31mWrongCat destructor was called\033[0m\n";
}

WrongCat::WrongCat(const WrongCat &cat) {
	std::cout << "\033[31mWrongCat Copy constructor was called\033[0m\n";
	*this = cat;
}

WrongCat	&WrongCat::operator=(const WrongCat &cat) {
	if (this == &cat)
		return *this;
	_type = cat._type;
	return *this;
}

void	WrongCat::makeSound() const{
	std::cout << "WrongCat is Meowing\n";
}