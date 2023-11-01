/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:08:35 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/01 21:33:30 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0),_y(0) {}

Point::~Point() {};

Point::Point(const float x, const float y):_x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(Point const &p) {
	*this = p;
}

void	Point::operator=(const Point &p) {
	(void) p;
}

float	Point::getX() const{
	return _x.toFloat();
}

float	Point::getY() const{
	return _y.toFloat();
}