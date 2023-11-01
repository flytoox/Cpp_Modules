/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:33 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/30 19:05:38 by obelaizi         ###   ########.fr       */
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
		Fixed(Fixed &fx);
		void	operator=(const Fixed &fx);
		int		getRawBits(void) const;
		void	setRawBits(int const _n);
};

#endif