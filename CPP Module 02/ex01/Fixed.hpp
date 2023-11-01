/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:33 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/30 19:05:36 by obelaizi         ###   ########.fr       */
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
		void	operator=(const Fixed &fx);
		int		getRawBits(void) const;
		void	setRawBits(int const n);
		float	toFloat(void) const;
		int		toInt(void) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fx);
#endif