/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:03:13 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/18 18:09:10 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main () {
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	cat->makeSound();
	dog->makeSound();

	Dog dg;
	Animal *animal = &dg;
	animal->makeSound();

	Animal *h[10];
	for (int i = 0; i < 5; i++)
		h[i] = new Dog();
	for (int i = 5; i < 10; i++)
		h[i] = new Cat();
	for (int i = 0; i < 10; i++)
		h[i]->makeSound(), delete h[i];
	delete cat;
	delete dog;

	Dog basic;
	{
		Dog tmp = basic;
	}

	Animal *ann = new Dog();
	Animal *an = new Dog();

	*an = *ann;
	delete an;
	delete ann;

	Dog ddd;

	Dog hh;

	ddd = hh;
	return 0;
}