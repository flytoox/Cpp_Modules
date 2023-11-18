/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaia
.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:15 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/12 18:35:28 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	_type = "AMateria";
	std::cout << "\033[31mAMateria Default constructor was called\033[0m\n";
}

AMateria::~AMateria() {
	std::cout << "\033[31mAMateria destructor was called\033[0m\n";
}

AMateria::AMateria(const AMateria &AMateria) {
	*this = AMateria;
	std::cout << "\033[31mAMateria Copy constructor was called\033[0m\n";
}

AMateria &AMateria::operator=(const AMateria&AMateria) {
	if (this == &AMateria)
		return *this;
	_type = AMateria._type;
	return *this;
}

std::string const &AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}

AMateria::AMateria(std::string const & type) {
	_type = type;
}
