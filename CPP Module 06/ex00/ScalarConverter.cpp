/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:10:16 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/06 00:51:22 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(ScalarConverter const &src) {
    *this = src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs) {
    if (this != &rhs) {
    }
    return *this;
}

void ScalarConverter::convert(std::string const &input) {
    try {
        int i = std::stoi(input);
        if (i < 32 || i > 126)
            throw NonDisplayableException();
        if (i < 0 || i > 255)
            throw ImpossibleException();
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    } catch (std::exception &e) {
        if (e.what()[0] == 'c')
            std::cout << e.what() << std::endl;
        else 
            std::cout << "char: impossible" << std::endl;
    }
    try {
        int i = std::stoi(input);
        std::cout << "int: " << i << std::endl;
    } catch (std::exception &e) {
        std::cout << "int: impossible" << std::endl;
    }
    try {
        float f = std::stof(input);
        std::cout << "float: " << f;
        if (f - static_cast<int>(f) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    } catch (std::exception &e) {
        std::cout << "float: impossible" << std::endl;
    }
    try {
        double d = std::stod(input);
        std::cout << "double: " << d;
        if (d - static_cast<int>(d) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    } catch (std::exception &e) {
        std::cout << "double: impossible" << std::endl;
    }
}

const char *ScalarConverter::ImpossibleException::what() const throw() {
    return "char: impossible";
}

const char *ScalarConverter::NonDisplayableException::what() const throw() {
    return "char: Non displayable";
}

std::ostream &operator<<(std::ostream &o, ScalarConverter const &rhs) {
    (void)rhs;
    return o;
}

