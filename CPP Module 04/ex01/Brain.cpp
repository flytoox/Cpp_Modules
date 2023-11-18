/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:53:54 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/16 21:01:34 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[31mBrain Default constructor was called\033[0m\n";
}

Brain::~Brain()
{
	std::cout << "\033[31mBrain destructor was called\033[0m\n";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "\033[31mBrain Copy constructor was called\033[0m\n";
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this == &obj)
		return *this;
	for (int i = 0; i < 100; i++)
		_ideas[i] = obj._ideas[i];
	return *this;
}