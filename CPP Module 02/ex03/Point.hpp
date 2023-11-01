/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:04:34 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/30 19:26:36 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"
class Point {
	private:
		Fixed const 	_x;
		Fixed const 	_y;
	public:
		Point();
		~Point();
		Point(Point const &p);
		Point(const float x, const float y);
		void	operator=(const Point &p);
		float	getX(void) const;
		float	getY(void) const;
		
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif