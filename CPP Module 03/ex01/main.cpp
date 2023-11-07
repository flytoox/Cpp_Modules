/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:03:13 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/07 19:47:51 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main () {
	ScavTrap ct("Flytoox");
	ScavTrap ca(ct);

	ct.attack("DA3NAN");
	ca.attack("Enemy");
	ct.takeDamage(5);
	ct.beRepaired(50);
	ct.guardGate();
}