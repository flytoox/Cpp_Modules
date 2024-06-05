/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:05:29 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/05 17:08:07 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {

    Bureaucrat b1("B1", 1);
    try {
        RobotomyRequestForm r("R1");
        PresidentialPardonForm p("P1");
        ShrubberyCreationForm s("S1");

        b1.signForm(r);
        b1.signForm(p);
        b1.signForm(s);

        b1.executeForm(r);
        b1.executeForm(p);
        b1.executeForm(s);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    Bureaucrat b2("B2", 150);
    try {
        RobotomyRequestForm r2("R2");
        PresidentialPardonForm p2("P2");
        ShrubberyCreationForm s2("S2");

        b2.signForm(r2);
        b2.signForm(p2);
        b2.signForm(s2);

        b2.executeForm(r2);
        b2.executeForm(p2);
        b2.executeForm(s2);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}