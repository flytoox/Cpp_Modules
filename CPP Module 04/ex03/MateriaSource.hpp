/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:11:46 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/16 21:21:45 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*_materia[4];
		int			_nb_materia;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &rhs);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif