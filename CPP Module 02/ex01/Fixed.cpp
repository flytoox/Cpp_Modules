/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:28 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/30 18:53:12 by obelaizi         ###   ########.fr       */
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

Fixed::Fixed(Fixed const &fx) {
	std::cout << "Copy contructor called\n";
	*this = fx;
}

void	Fixed::operator=(const Fixed &fx) {
	std::cout << "Copy assignment operator called\n";
	_n = fx._n;
}

int		Fixed::getRawBits() const{
	return _n;
}

void	Fixed::setRawBits(int const n) {
	_n = n;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fx) {
	os << fx.toFloat();
	return os;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called\n";
	_n = n * 256;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called\n";
	_n = roundf(n * 256);
}

int	Fixed::toInt(void) const {
	return roundf(this->toFloat());
}

float Fixed::toFloat(void) const {
	return ((float)_n / 256);
}
