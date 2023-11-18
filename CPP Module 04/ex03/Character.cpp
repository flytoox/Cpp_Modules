/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:09:45 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/18 18:06:42 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	_name = "default";
	_nb_materia = 0;
	_deleted_materia = 0;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "\033[31mCharacter Default constructor was called\033[0m\n";
}

Character::Character(std::string const & name)
{
	_name = name;
	_nb_materia = 0;
	_deleted_materia = 0;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 40; i++)
		_delete_inventory[i] = NULL;
	std::cout << "\033[31mCharacter Default constructor was called\033[0m\n";
}

Character::Character(const Character &src)
{
	std::cout << "\033[31mCharacter Copy constructor was called\033[0m\n";
	_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_nb_materia = src._nb_materia;
	_deleted_materia = src._deleted_materia;
	for (int i = 0; i < 40; i++)
	{
		if (_delete_inventory[i])
			delete _delete_inventory[i];
		if (src._delete_inventory[i])
			_delete_inventory[i] = src._delete_inventory[i]->clone();
		else
			_delete_inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	for (int i = 0; i < _deleted_materia; i++)
	{
		if (_delete_inventory[i])
			delete _delete_inventory[i];
	}
	std::cout << "\033[31mCharacter destructor was called\033[0m\n";
}

Character	&Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
		_nb_materia = rhs._nb_materia;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (_nb_materia < 4)
	{
		for (int  i=0; i< _nb_materia; i++)
		{
			if (_inventory[i] == m)
			{
				std::cout << "Materia already equiped" << std::endl;
				return ;
			}
		}
		_inventory[_nb_materia] = m;
		_nb_materia++;
	}
	else
		std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (_deleted_materia == 40)
			_deleted_materia = 0;
		if (_delete_inventory[_deleted_materia])
			delete _delete_inventory[_deleted_materia];
		_delete_inventory[_deleted_materia] = _inventory[idx];
		_deleted_materia++;
		_inventory[idx] = NULL;
		_nb_materia--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}