/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:10:16 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 02:48:52 by obelaizi         ###   ########.fr       */
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
    (void)rhs;
    return *this;
}

void ScalarConverter::convert(std::string const &input) {
    if (input.size() == 1 && !isdigit(input[0])) {
        std::cout << "char: '" << input << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
        return ;
    }
    double d = strtod(input.c_str(), NULL);
    if (!d && input != "0") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    //Char
    int i = static_cast<int>(d);
    std::cout << "char: ";
    if (d != d || d > 127 || d < 0)
        std::cout << "impossible" << std::endl;
    else if (i < 32 || i > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" <<  static_cast<char>(i) << "'" << std::endl;
    //Int
    std::cout << "int: ";
    if (d > INT_MAX || d < INT_MIN || d != d)
        std::cout << "impossible" << std::endl;
    else
        std::cout << i << std::endl;
    //Float
    float f = static_cast<float>(d);
    std::cout << "float: " << f;
    if (f - static_cast<int>(f) == 0)
        std::cout << ".0";
    std::cout << "f" << std::endl;
    //Double
    std::cout << "double: " << d;
    if (d - static_cast<int>(d) == 0)
        std::cout << ".0";
    std::cout << std::endl;
}

std::ostream &operator<<(std::ostream &o, ScalarConverter const &rhs) {
    (void)rhs;
    return o;
}
