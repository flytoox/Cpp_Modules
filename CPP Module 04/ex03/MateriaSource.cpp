/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:13:56 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/18 16:25:58 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nb_materia(0)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	std::cout << "\033[31mMateriaSource Default constructor was called\033[0m\n";
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "\033[31mMateriaSource Copy constructor was called\033[0m\n";
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
		if (src._materia[i])
			_materia[i] = src._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	_nb_materia = src._nb_materia;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_materia[i])
			delete _materia[i];
	std::cout << "\033[31mMateriaSource destructor was called\033[0m\n";
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				delete _materia[i];
			if (rhs._materia[i])
				_materia[i] = rhs._materia[i]->clone();
			else
				_materia[i] = NULL;
		}
		_nb_materia = rhs._nb_materia;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_nb_materia < 4)
	{
		_materia[_nb_materia] = m;
		_nb_materia++;
		return ;
	}
	std::cout << "MateriaSource is full" << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	return (NULL);
}
