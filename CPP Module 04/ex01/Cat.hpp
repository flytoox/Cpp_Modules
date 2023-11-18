/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:22:50 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/16 22:06:39 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain	*_brain;
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &cat);
		Cat	&operator=(const Cat &cat);
		void	makeSound() const ;	
};

#endif