/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:05:29 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/05 17:06:34 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat b("L3arbi", 150);
    Form f("Form", 149, 150);
    std::cout << b << std::endl;
    try {
        b.signForm(f);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    b.incrementGrade();
    try {
        b.signForm(f);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << b << std::endl;
    return 0;
}