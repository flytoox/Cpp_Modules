/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:24:48 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/02 12:06:47 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	std::cout << bsp(Point(1,1), Point(2,2), Point(1,3), Point(3,1)) << std::endl; // should print 0
	std::cout << bsp(Point(1,1), Point(2,2), Point(1,3), Point(1,3)) << std::endl; // should print 0
	std::cout << bsp(Point(1,1), Point(2,2), Point(1,3), Point(1.5,2)) << std::endl; // should print 1
	std::cout << bsp(Point(0,0), Point(10,30), Point(20,0), Point(10,15)) << std::endl; // should print 1
	return 0;
}