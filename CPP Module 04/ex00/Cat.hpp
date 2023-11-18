/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:22:50 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/17 14:56:58 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &cat);
		Cat	&operator=(const Cat &cat);
		void	makeSound() const ;	
};

#endif