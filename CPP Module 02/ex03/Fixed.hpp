/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:33 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/30 19:05:34 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include <cmath>

class Fixed {
	private:
		int						_n;
		static const int fractBits;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &fx);
		Fixed(const int n);
		Fixed(const float n);
		int		getRawBits(void) const;
		void	setRawBits(int const n);
		float	toFloat(void) const;
		int		toInt(void) const;
		void	operator=(const Fixed &fx);
		
		bool	operator>(const Fixed &fx) const;
		bool	operator<(const Fixed &fx) const;
		bool	operator>=(const Fixed &fx) const;
		bool	operator<=(const Fixed &fx) const;
		bool	operator!=(const Fixed &fx) const;
		bool	operator==(const Fixed &fx) const;

		Fixed	operator-(const Fixed &fx) const;
		Fixed	operator+(const Fixed &fx) const;
		Fixed	operator*(const Fixed &fx) const;
		Fixed	operator/(const Fixed &fx) const;

		Fixed	operator++(int);
		Fixed	&operator++();
		Fixed	operator--(int);
		Fixed	&operator--();

		static Fixed	&max(Fixed &fx1, Fixed &fx2);
		static const Fixed	&max(const Fixed &fx1, const Fixed &fx2);
		static Fixed	&min(Fixed &fx1, Fixed &fx2);
		static const Fixed	&min(const Fixed &fx1, const Fixed &fx2);
				
};
std::ostream& operator<<(std::ostream& os, const Fixed& fx);
#endif