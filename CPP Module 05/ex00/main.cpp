/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:05:29 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/04 21:12:26 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("L3arbi", 155);
        std::cout << b << std::endl;
        b.incrementGrade();
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    Bureaucrat b("L3arbi", 150);
    std::cout << b << std::endl;
    
    try {
        b.decrementGrade();
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << b << std::endl;

    try {
        b.decrementGrade();
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << b << std::endl;
    return 0;
}