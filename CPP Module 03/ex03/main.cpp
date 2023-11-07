/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:03:13 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/07 19:48:22 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main () {
	DiamondTrap ct("Flytoox");

	ct.attack("DA3NAN");
	ct.whoAmI();
	ct.guardGate();
	ct.highFivesGuy();
	ct.takeDamage(5);
	ct.beRepaired(50);
	ct.takeDamage(30);
}