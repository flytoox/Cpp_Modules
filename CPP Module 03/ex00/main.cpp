/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:03:13 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/07 19:45:42 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main () {
	//create for me a main to test your classes
	ClapTrap ct("Flytoox");
	
	ct.attack("DA3NAN");
	ct.takeDamage(5);
	ct.beRepaired(5);
	ct.takeDamage(10);
	ct.beRepaired(10);
	ct.takeDamage(100);
	ct.beRepaired(100);
}