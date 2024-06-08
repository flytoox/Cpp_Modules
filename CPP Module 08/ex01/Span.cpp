/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:45:39 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/08 20:34:53 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(Span const &src) : _n(src._n), _v(src._v) {}

Span::~Span() {}

Span &Span::operator=(Span const &rhs) {
    if (this == &rhs)
        return *this;
    _n = rhs._n;
    _v = rhs._v;
    return *this;
}

void Span::addNumber(int n) {
    if (_v.size() >= _n)
        throw std::runtime_error("Error: Span is full");
    _v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (_v.size() + std::distance(begin, end) > _n)
        throw std::runtime_error("Error: Span is full");
    _v.insert(_v.end(), begin, end);
}

int Span::shortestSpan() {
    if (_v.size() <= 1)
        throw std::runtime_error("Error: Span has less than 2 elements");
    std::vector<int> tmp = _v;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 2; i < tmp.size(); i++) {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return min;
}

int Span::longestSpan() {
    if (_v.size() <= 1)
        throw std::runtime_error("Error: Span has less than 2 elements");
    std::vector<int> tmp = _v;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}
