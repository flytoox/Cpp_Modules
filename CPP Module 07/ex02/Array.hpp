/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 04:44:13 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 05:02:32 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;

    public:
        Array() : _array(nullptr), _size(0) {}
        Array(unsigned int n) : _array(new T(n)), _size(n) {}
        Array(Array const &src) : _array(new T(src._size)), _size(src._size) {
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = src._array[i];
        }
        ~Array() { if(_array) delete[] _array; }

        Array &operator=(Array const &obj) {
            if (this == &obj)
                return *this;
            if (_array)
                delete[] _array;
            _size = obj._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = obj._array[i];
            return *this;
        }

        T &operator[](unsigned int i) {
            if (i >= _size)
                throw std::out_of_range("Index out of range");
            return _array[i];
        }

        unsigned int size() const { return _size; }
};
