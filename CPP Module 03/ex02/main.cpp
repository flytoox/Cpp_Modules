/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:03:13 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/07 19:48:07 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main () {
	FragTrap ct("Flytoox");

	ct.attack("DA3NAN");
	
	ct.takeDamage(5);
	ct.beRepaired(50);
	ct.takeDamage(30);
	ct.highFivesGuy();
}