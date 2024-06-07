/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:52:13 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 02:14:33 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Usage: ./convert [input]" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);

    return 0;
}