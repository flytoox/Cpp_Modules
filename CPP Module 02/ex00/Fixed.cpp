/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:28 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/27 18:19:18 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed() {
	_n = 0;
	std::cout << "Default contructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed &fx) {
	std::cout << "Copy contructor called\n";
	*this = fx;
}

void	Fixed::operator=(const Fixed &fx) {
	std::cout << "Copy assignment operator called\n";
	_n = fx.getRawBits();
}

int		Fixed::getRawBits() const{
	std::cout << "getRawBits mumber function called\n";
	return _n;
}

void	Fixed::setRawBits(int const n) {
	_n = n;
}