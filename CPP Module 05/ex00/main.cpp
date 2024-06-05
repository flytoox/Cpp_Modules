/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:05:29 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/05 18:13:25 by obelaizi         ###   ########.fr       */
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
    
    try {
        Bureaucrat b("L3arbi1", 0);
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    return 0;
}