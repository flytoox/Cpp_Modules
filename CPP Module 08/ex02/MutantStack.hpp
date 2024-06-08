/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:50:11 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/08 21:33:37 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const &src) : std::stack<T>(src) {}
        ~MutantStack() {}
        MutantStack &operator=(MutantStack const &obj) {
            if (this == &obj) return *this;
            std::stack<T>::operator=(obj);
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return std::stack<T>::c.begin(); }
        iterator end() { return std::stack<T>::c.end(); }
};
