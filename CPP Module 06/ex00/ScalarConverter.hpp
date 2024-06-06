/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:50:28 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/05 22:01:19 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
    public:
        ScalarConverter();
        virtual ~ScalarConverter() = 0;
        ScalarConverter(ScalarConverter const &src);
        ScalarConverter &operator=(ScalarConverter const &rhs);
        

        class ImpossibleException : public std::exception
        {
            virtual const char *what() const throw();
        };
        
        class NonDisplayableException : public std::exception
        {
            virtual const char *what() const throw();
        };
        static void convert(std::string const &input);
};

std::ostream &operator<<(std::ostream &o, ScalarConverter const &rhs);