/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:28 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/28 18:30:39 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed() {
	_n = 0;
	_fractPart = 0;
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
	_fractPart = fx._fractPart;
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
	_n = n;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called\n";
	_n = (n);
	float fractVal = n - static_cast<float>(_n);
	_fractPart = (fractVal * 256);
	std::cout<<fractVal <<" fractPart  " << _fractPart<<std::endl;
}




int	Fixed::toInt(void) const {
	return roundf(this->toFloat());
}

float Fixed::toFloat(void) const {
	return static_cast<float>(_n + (static_cast<float>(_fractPart) / 256));
}



bool	Fixed::operator>(const Fixed &fx) {
	return (_n > fx._n || (_n == fx._n && _fractPart > fx._fractPart));
}

bool	Fixed::operator<(const Fixed &fx) {
	return (_n < fx._n || (_n == fx._n && _fractPart < fx._fractPart));
}

bool	Fixed::operator>=(const Fixed &fx) {
	return !(*this < fx);
}

bool	Fixed::operator<=(const Fixed &fx) {
	return !(*this > fx);
}

bool	Fixed::operator==(const Fixed &fx) {
	return (_n == fx._n && _fractPart == fx._fractPart);
}

bool	Fixed::operator!=(const Fixed &fx) {
	return !(*this == fx);
}

Fixed	Fixed::operator-(const Fixed &fx) {
	return (Fixed(static_cast<float>(this->toFloat() - fx.toFloat())));
}

Fixed	Fixed::operator+(const Fixed &fx) {
	return (Fixed(static_cast<float>(this->toFloat() + fx.toFloat())));
}

Fixed	Fixed::operator*(const Fixed &fx) {
	return (Fixed(static_cast<float>(this->toFloat() * fx.toFloat())));
}

Fixed	Fixed::operator/(const Fixed &fx) {
	return (Fixed(static_cast<float>(this->toFloat() / fx.toFloat())));
}


Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	if (_fractPart == 255) {
		_fractPart = 0;
		_n++;
	}
	else
		_fractPart++;
	return tmp;
}

Fixed	&Fixed::operator++() {
	if (_fractPart == 255) {
		_fractPart = 0;
		_n++;
	}
	else
		_fractPart++;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp = *this;
	if (_fractPart == 0) {
		_fractPart = 255;
		_n--;
	}
	else
		_fractPart--;
	return tmp;
}

Fixed	&Fixed::operator--() {	
	if (_fractPart == 0) {
		_fractPart = 255;
		_n--;
	}
	else
		_fractPart--;
	return *this;
}
