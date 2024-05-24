/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:05:29 by obelaizi          #+#    #+#             */
/*   Updated: 2024/04/28 11:20:59 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat b("L3arbi", 150);
    Form f("Form", 1, 150);
    std::cout << b << std::endl;
    
    try {
        b.incrementGrade();
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    try {
        b.signForm(f);
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    try {
        b.decrementGrade();
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    try {
        b.signForm(f);
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    try {
        b.decrementGrade();
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    
    try {
        b.signForm(f);
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << b << std::endl;
    return 0;
}