/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:05:29 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/04 23:18:07 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat b1("B1", 1);
    try {
        Intern i;
        AForm *r = i.makeForm("robotomy request", "R1");
        AForm *p = i.makeForm("presidential pardon", "P1");
        AForm *s = i.makeForm("shrubbery creation", "S1");

        b1.signForm(*r);
        b1.signForm(*p);
        b1.signForm(*s);

        b1.executeForm(*r);
        b1.executeForm(*p);
        b1.executeForm(*s);
        delete(r);
        delete(p);
        delete(s);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    Bureaucrat b2("B2", 150);
    try {
        Intern i;
        AForm *r2 = i.makeForm("robotomy request", "R2");
        AForm *p2 = i.makeForm("presidential pardon", "P2");
        AForm *s2 = i.makeForm("shrubbery creation", "S2");

        b2.signForm(*r2);
        b2.signForm(*p2);
        b2.signForm(*s2);

        b2.executeForm(*r2);
        b2.executeForm(*p2);
        b2.executeForm(*s2);
        delete(r2);
        delete(p2);
        delete(s2);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}